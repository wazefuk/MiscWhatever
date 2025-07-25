#include <iostream>
#include "lib/CMD.hh"
#include <fstream>
#include "lib/General.hh"

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    Funczz::DebugLog("SHOWTHEGITIGNORE runner function called",false,false,true);
    std::ifstream File(".gitignore", std::ios::in);
    if (!File) {
        Funczz::DebugLog("No gitignore found",false,true,true);
        std::cout << "\033[31m" << "There is no gitignore :(\n" << "\033[0m";
        return;
    } else {
        Funczz::DebugLog("Gitignore exists",false,false,true);
        std::string Line;
        while (std::getline(File, Line)) {
            std::cout << Line << std::endl;
            Funczz::DebugLog("Showed line of gitignore",false,false,true);
        }
    }
    Funczz::DebugLog("SHOWTHEGITIGNORE over",false,false,true);
}