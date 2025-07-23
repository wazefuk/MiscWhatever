#include <iostream>
#include "lib/CMD.hh"
#include <fstream>

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    std::ifstream File(".gitignore", std::ios::in);
    if (!File) {
        std::cout << "\033[31m" << "There is no gitignore :(\n" << "\033[0m";
        return;
    } else {
        std::string Line;
        while (std::getline(File, Line)) {
            std::cout << Line << std::endl;
        }
    }
}