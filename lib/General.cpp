#include "lib/General.hh"

#include <iostream>
#include <fstream>
#include <string>
#include <random>

namespace Varzz {
    std::vector<std::string> CMDHistory;
}

namespace Funczz {

std::random_device rd;
std::mt19937 gen(rd());

void printFile(std::string path) {
    std::ifstream File(path);
    std::string Line;
    if (!File) {
        return;
    }
    while (std::getline(File, Line)) {
        std::cout << Line << "\n";
    }
    File.close();
}

std::string lowercaseify(std::string& input) {
    std::string result;
    for (int i = 0; i < input.length(); i++) {
        result.push_back(std::tolower(input[i]));
    }
    return result;
}

int randrange(int lowerbound, int upperbound) {
    std::uniform_int_distribution<> distr(lowerbound, upperbound);
    return distr(gen);
}

}