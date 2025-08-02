#include <iostream>
#include "lib/CMD.hh"
#include "lib/General.hh"
#include <string>

void CMD::CMD_run::CMDHistory_Main() {
    std::string CMDHistory_parsedString;
    for (int i = 0; i < Varzz::CMDHistory.size(); i++) {
        CMDHistory_parsedString.append(Varzz::CMDHistory[i] + "\n");
    }
    std::cout << "\n\n" << CMDHistory_parsedString << "\n\n\n";
}