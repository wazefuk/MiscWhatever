#include <iostream>
#include "General.hh"
#include "CMD.hh"

int CMDParse(std::string input) {
    if (input == "help") {
        Funczz::printFile("Help.txt");
        return 0;
    } else if (input == "exit") {
        std::cout << "Bye!";
        return 1;
    } else if (input == "vocabextract") {
        CMD::VocabExtract_Main();
        return 2;
    }
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