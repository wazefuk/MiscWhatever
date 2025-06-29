/*General - A utility header for MiscWhatever*/

#pragma once

#include <string>
#include <vector>

namespace Funczz {
	void DebugMSG(std::string msg, bool forced, bool isErr, bool shouldLog);
	void Lowercaseify(std::string& input);
	void printFile(std::string path);
}

namespace Varzz {
	extern bool Debug; // Global debug flag
	extern bool DebugLog; // Global debug log flag
	extern std::vector<std::string> CMDHistory; // Command history
}