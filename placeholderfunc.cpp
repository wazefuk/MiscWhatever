#include <iostream>
#include "lib/CMD.hh"

void msg(std::string cmdname) {
    std::cout
        << "\033[31m"
        << "\n\aNotice: CMD::CMD_run::" + cmdname +"() is currently unimplemented"
        << std::endl
        << "\033[0m";
}

void CMD::CMD_run::AHiddenCommandNotShownInHelp_Main() {
    msg("AHiddenCommandNotShownInHelp_Main");
}

void CMD::CMD_run::CMDHistory_Main() {
    msg("CMDHistory_Main");
}

void CMD::CMD_run::SHOWTHEGITIGNORE_Main() {
    msg("SHOWTHEGITIGNORE_Main");
}