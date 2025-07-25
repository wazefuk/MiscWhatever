#include "lib/General.hh"
#include "lib/CMD.hh"

#include <vector>
#include <string>
#include <iostream>


bool isAllowedChar(char c) { // Checks if a character is an alphabetic character or an apostrophe
	Funczz::DebugLog("isAllowedChar run",false,false,true);
	return std::isalpha(c) || c == '\'';
}

std::vector<std::string> parseToWords(std::string& input) { // Tokenizes the input string into words
	Funczz::DebugLog("parseToWords run",false,false,true);
	std::vector<std::string> words;
	std::string wordtemp;
	Funczz::lowercaseify(input);
	for (char c : input) { // Range-based for loop to iterate through characters
		Funczz::DebugLog("Character iterator iteration",false,false,true);
		if (isAllowedChar(c)) {
			wordtemp += c; // Append character to current word
			Funczz::DebugLog("Character adding to word buffer",false,false,true);
		} else if (!wordtemp.empty()) {
			Funczz::DebugLog("Character not allowed character and a word is in the buffer. Adding to word list",false,false,true);
			words.push_back(wordtemp); // Add completed word to the list
			wordtemp.clear(); // Clear the temporary word
		}
	}
	if (!wordtemp.empty()) {
		Funczz::DebugLog("Adding leftover word buffer",false,false,true);
		words.push_back(wordtemp); // Add the last word if it exists
	}
	return words;
}

std::string parseWords(const std::vector<std::string>& input) { // Deduplicates the words and returns a single string
	Funczz::DebugLog("parseWords run",false,false,true);
	std::string result;
	std::vector<std::string> words;
	for (const auto& word : input) {
		Funczz::DebugLog("Deduplication iteration",false,false,true);
		bool found = false;
		for (const auto& existing : words) {
			Funczz::DebugLog("Repeat checking iteration",false,false,true);
			if (word == existing) {
				Funczz::DebugLog("Word already exists",false,false,true);
				found = true; // Check if the word already exists
				break;
			}
		}
		if (!found) {
			Funczz::DebugLog("Word is unique. Adding to list",false,false,true);
			words.push_back(word); // Add unique word to the list
		}
	}
	for (const auto& word : words) {
		Funczz::DebugLog("Word concatenation iteration",false,false,true);
		result += word + " "; // Concatenate words into a single string
	}
	return result;
}

void CMD::CMD_run::VocabExtract_Main() { // Main function for the VocabExtract tool
	Funczz::DebugLog("VocabExtract runner function called",false,false,true);
	std::cout << "Welcome to VocabExtract, the MiscWhatever word deduplication tool!\ninput your text here:\n\n>> ";
	std::string Input;
	std::getline(std::cin >> std::ws, Input); // Read input from the user
	Funczz::DebugLog("Input read, starting deduplication",false,false,true);
	std::cout // Process and output the deduplicated words
		<< std::endl
		<< parseWords(parseToWords(Input))
		<< std::endl;
}