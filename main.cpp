#include <iostream>
#include <string>
#include "General.hh"
#include "CMD.hh"

std::string CMDExp[] = {
    "HELP - Shows this message",
    "EXIT - Exits the program",
    "VOCABEXTRACT - A simple(?) word deduplication tool",
    "RANDOMSONGGEN - Generates a random song's lyrics",
    "ITADD - Worlds worst interpreter for the world's world language (isn't even turing complete!)",
    "SHOWTHEGITIGNORE - Prints the projects .gitignore (only works if you're running this in the repository folder)",
    "CMDHISTORY - Shows every command you've run",
    "SUPERDUPEREXIT - Exits the program via segfault (may cause unintended behavior)",
};

int CMDParse(std::string input) {
    if (input == "help") {
        std::cout << "\n";
        for (int i = 0; i < 8 /*size of the CMDExp array*/; i++) {
            std::cout << CMDExp[i] << std::endl;
        }
        return 0;
    } else if (input == "exit") {
        std::cout << "Bye!";
        return 1;
    } else if (input == "vocabextract") {
        CMD::VocabExtract_Main();
        return 2;
    } else if (input == "randomsonggen"){
        CMD::RandomSongGen_Main();
        return 3;
    } else if (input == "itadd") {
        CMD::ItAdd_Main();
        return 4;
    } else if (input == "showthegitignore") {
        CMD::SHOWTHEGITIGNORE_Main();
        return 5;
    } else if (input == "cmdhistory") {
        CMD::CMDHistory_Main();
        return 6;
    } else if (input == "ahiddencommandnotshowninhelp") {
        CMD::AHiddenCommandNotShownInHelp_Main();
        return 7;
    } else if (input == "superduperexit") {
        int *ptr = nullptr;
        *ptr = 42;
    }
    return -1; // -1 for "command didn't come with a return value"
}

int main() {
    Varzz::Debug = false;
    Varzz::DebugLog = false;

    std::string CMDin;

    std::cout << "Welcome to MiscWhatever!\nThis is a neat little toy CLI full of both helpful and unhelpful tools...\n(note: \"help\" for a list of commands)\n\n";

    while (true) {
        std::cout << "A:\\MiscWhatever> ";
        std::getline(std::cin, CMDin);
        std::cout << "\n";
        CMDin = Funczz::lowercaseify(CMDin);
        Varzz::CMDHistory.push_back(CMDin);
        if (CMDParse(CMDin) == 1) { return 0; }
    }
}