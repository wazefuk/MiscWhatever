#include <iostream>
#include "lib/CMD.hh"
char num[10] = {'0','1','2','3','4','5','6','7','8','9',}; // because isalnum is too mainstream

void CMD::CMD_run::ItAdd_Main() {
    std::cout << "Welcome to ItAdd! (unfortunately)\n\nPut in some numbers:\n";
    std::string input;
    std::cin >> input;
    unsigned long long output = 0;
    for (int i = 0; i < input.length(); i++) {
        for (int j = 0; j < 10; j++) {
            if (input[i] == num[j]) {
                output += j;
            }
        }
    }
    std::cout << "\n" << output << "\n";
}