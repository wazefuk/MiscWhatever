#include "lib/CMD.hh"

#include <iostream>
#include <string>
#include <random>
#include <vector>
#include "lib/General.hh"

void CMD::CMD_run::RandomSongGen_Main() {
    Funczz::DebugLog("Initalizing RandomSongGen",false,false,true);
    std::vector<std::string> output;
    std::string outputstring;
    std::string lines[] = {
        "Just eat it", 
        "No one wants to eat a lemon", 
        "It might be in the walls", 
        "Someone could be here",
        "Did you have a good dinner?", 
        "No one wants to get better", 
        "There's a weird thing on your forehead", 
        "Somnolence is here...", 
        "What the dog!?",
        "Whatever happened to SpongeBob", 
        "9 missed calls from ya' father", 
        "I need a blood transfusion", 
        "I misspelled my name last week", 
        "Gimme a pint of lemon juice now", 
        "Shut up with your superiority complex"
    };
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 15);
    Funczz::DebugLog("Done initializing RandomSongGen",false,false,true);
    int num = distr(gen);
    for (int i = 0; i < num*2; i++) {
        Funczz::DebugLog("Adding line...",false,false,true);
        num = distr(gen);
        output.push_back(lines[num]);
    }
    Funczz::DebugLog("Song parsing over, converting to string",false,false,true);
    for (int i = 0; i < output.size(); i++) {
        outputstring.append(output[i] + '\n');
    }
    std::cout << outputstring << std::endl;
}