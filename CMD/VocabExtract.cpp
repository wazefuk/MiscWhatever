#include "General.hh"
#include "CMD.hh"

#include <vector>
#include <string>
#include <iostream>


bool isAllowedChar(char c) { // Checks if a character is an alphabetic character or an apostrophe
	return std::isalpha(c) || c == '\'';
}

std::vector<std::string> parseToWords(std::string& input) { // Tokenizes the input string into words
	std::vector<std::string> words;
	std::string wordtemp;
	Funczz::lowercaseify(input);
	for (char c : input) { // Range-based for loop to iterate through characters
		if (isAllowedChar(c)) {
			wordtemp += c; // Append character to current word
		} else if (!wordtemp.empty()) {
			words.push_back(wordtemp); // Add completed word to the list
			wordtemp.clear(); // Clear the temporary word
		}
	}
	if (!wordtemp.empty()) {
		words.push_back(wordtemp); // Add the last word if it exists
	}
	return words;
}

std::string parseWords(const std::vector<std::string>& input) { // Deduplicates the words and returns a single string
	std::string result;
	std::vector<std::string> words;
	for (const auto& word : input) {
		bool found = false;
		for (const auto& existing : words) {
			if (word == existing) {
				found = true; // Check if the word already exists
				break;
			}
		}
		if (!found) {
			words.push_back(word); // Add unique word to the list
		}
	}
	for (const auto& word : words) {
		result += word + " "; // Concatenate words into a single string
	}
	return result;
}

void CMD::CMD_run::VocabExtract_Main() { // Main function for the VocabExtract tool
	std::cout << "Welcome to VocabExtract, the MiscWhatever word deduplication tool!\ninput your text here:\n\n>> ";
	std::string Input;
	std::getline(std::cin >> std::ws, Input); // Read input from the user
	std::cout << std::endl << parseWords(parseToWords(Input)) << std::endl; // Process and output the deduplicated words
}