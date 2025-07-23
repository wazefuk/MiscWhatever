#include <iostream>
#include "CMD.hh"

void CMD::CMD_run::AHiddenCommandNotShownInHelp_Main() {
    std::cout << "\033[31m"; 
    std::cout << "\nNotice: CMD::CMD_run::AHiddenCommandNotShownInHelp_Main() is currently unimplemented" << std::endl;
    std::cout << "\033[0m";
}

void CMD::CMD_run::CMDHistory_Main() {
    std::cout << "\033[31m"; 
    std::cout << "\nNotice: CMD::CMD_run::CMDHistory_Main() is currently unimplemented" << std::endl;
    std::cout << "\033[0m";
}

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    std::cout << "\033[31m"; 
    std::cout << "\nNotice: CMD::CMD_run::SHOWTHEGITIGNORE_Main() is currently unimplemented" << std::endl;
    std::cout << "\033[0m";
}