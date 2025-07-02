#include "General.hh"
#include <iostream>
#include "CMD.hh"

int main() {
	Varzz::Debug = false;
	Varzz::DebugLog = false;
	std::cout << "Welcome to MiscWhatever! This is a little toy CLI full of both useless and useful stuff.\n(hint: type 'help' for a list of commands)\n\n";
	while (true) {
		std::cout << "A:\\MiscWhatever> ";
		std::string input;
		std::getline(std::cin, input);
		Funczz::Lowercaseify(input);
		if (input == "exit") { return 0; }
		else if (input == "help") { Funczz::printFile("Help.txt"); }
		else if (input == "debug") {
			if (Varzz::Debug) {
				Varzz::Debug = false;
				Funczz::DebugMSG("Debug mode disabled.");
			} else {
				Varzz::Debug = true;
				Funczz::DebugMSG("Debug mode enabled.");
			}
		}
		else if (input == "debuglog") {
			if (Varzz::DebugLog) {
				Varzz::DebugLog = false;
				Funczz::DebugMSG("Debug log disabled.");
			}
			else {
				Varzz::DebugLog = true;
				Funczz::DebugMSG("Debug log enabled.");
			}
		}
		else if (input == "vocabextract") {
			CMD::VocabExtract_Main();
		} else {
			Funczz::DebugMSG("Unknown command: " + input, true, true);
		}
}