#include <iostream>
#include "lib/CMD.hh"
#include <fstream>
#include "lib/General.hh"

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    std::ifstream File(".gitignore", std::ios::in);
    if (!File) {
        return;
    } else {
        std::string Line;
        while (std::getline(File, Line)) {
            std::cout << Line << std::endl;
        }
    }
}