#include <iostream>
#include "lib/CMD.hh"
#include <fstream>

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    std::ifstream File(".gitignore", std::ios::in);
    if (!File) {
        std::cout << "\nYou need to be running this file from inside the source repository for this command to work.\n";
        return;
    } else {
        std::string Line;
        while (std::getline(File, Line)) {
            std::cout << Line << std::endl;
        }
    }
}