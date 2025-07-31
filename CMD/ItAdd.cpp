#include <iostream>
#include "lib/CMD.hh"
#include "lib/General.hh"

char num[10] = {'0','1','2','3','4','5','6','7','8','9',};

void CMD::CMD_run::ItAdd_Main() {
    Funczz::DebugLog("ItAdd runner function called",false,false,true);
    std::cout << "Welcome to ItAdd! (unfortunately)\n\nPut in some numbers:\n";
    std::string input;
    std::cin >> input;
    unsigned long long output = 0;
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j <= 10; j++) {
            if (input[i] == num[j]) {
                output += j;
            }
        }
    }
    Funczz::DebugLog("ItAdd finished",false,false,true);
    std::cout << "\n" << output << "\n";
}