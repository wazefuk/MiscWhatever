#include "General.hh"

#include <iostream>
#include <fstream>
#include <string>

void Funczz::DebugLog(std::string input, bool forceShow, bool isErr, bool shouldLog) {
    if (Varzz::Debug || forceShow) {
        if (isErr) {
            std::cerr << input << std::endl;
        } else {
        std::cout << input << std::endl;
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

void Funczz::printFile(std::string path) {
    std::ifstream File(path);
    std::string Line;
    if (!File) {
        DebugLog("ERROR! File " + path + " not found! Make sure that both the path name is not misspelled and the file even exists in the first place.", true, true, true);
        return;
    }
    while (std::getline(File, Line)) {
        std::cout << Line << "\n";
    }
    File.close();
}

std::string Funczz::lowercaseify(std::string& input) {
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        result.push_back(std::tolower(input[i]));
    }
    return result;
}