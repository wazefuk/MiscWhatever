#include "lib/General.hh"

#include <iostream>
#include <fstream>
#include <string>
#include <random>

namespace Funczz {

std::random_device rd;
std::mt19937 gen(rd());

void DebugLog(std::string input, bool forceShow, bool isErr, bool shouldLog) {
    if (Varzz::Debug || forceShow) {
        if (isErr) {
            std::cerr
                << input
                << std::endl;
        } else {
           std::cout
                << input
                << std::endl;
        }
        if (shouldLog) {
            std::ofstream logFile("log.txt", std::ios::app);
            if (!logFile) {
                std::cerr << "ERROR! log.txt DID NOT OPEN FOR DEBUG LOGGING!\n";
            } else {
                logFile << "\n---------------\n" << input;
                logFile.close();
            }
        }
    }
}

void printFile(std::string path) {
    DebugLog("printFile run",false,false,true);
    std::ifstream File(path);
    std::string Line;
    if (!File) {
        DebugLog("ERROR! File " + path + " not found! Make sure that both the path name is not misspelled and the file even exists in the first place.", true, true, true);
        return;
    }
    DebugLog("File exists, printing file...",false,false,true);
    while (std::getline(File, Line)) {
        std::cout << Line << "\n";
        DebugLog("Printed line",false,false,true);
    }
    File.close();
}

std::string lowercaseify(std::string& input) {
    DebugLog("lowercasify run",false,false,true);
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        result.push_back(std::tolower(input[i]));
        DebugLog("Lowercasing letter" + i,false,false,true);
    }
    return result;
}

int randrange(int lowerbound, int upperbound) {
    DebugLog("Randrange run for " + std::to_string(lowerbound) + ", " + std::to_string(upperbound),false,false,true);
    std::uniform_int_distribution<> distr(lowerbound, upperbound);
    return distr(gen);
}

}