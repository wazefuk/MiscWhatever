#include "General.hh"
#include <iostream>
#include <fstream>
#include <string>

namespace Funczz {
	static void DebugMSG(std::string msg, bool forced = false, bool isErr = false, bool shouldLog = true) {
		if (Varzz::Debug || forced) {
			if (isErr) {
				std::cerr << msg << std::endl;
			} else {
				std::cout << msg << std::endl;
			}
			if (shouldLog) {
				std::ofstream logFile("log.txt", std::ios::app);
				if (logFile.is_open()) {
					logFile << "\n-------------\n" << msg;
				}
			}
		}
	}

	static void Lowercaseify(std::string& input) {
		for (char& c : input) {
			c = std::tolower(c);
		}
	}

	static void printFile(std::string path) {
		DebugMSG("printFile called for: " + path);
		std::ifstream file(path);
		std::string line;
		if (!file.is_open()) {
			DebugMSG("Error: Unable to open file " + path, true, true);
			return;
		}
		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	}
}

namespace Varzz {
	bool Debug = false; // Global debug flag
	bool DebugLog = true; // Global debug log flag
	std::vector<std::string> CMDHistory; // Command history
}