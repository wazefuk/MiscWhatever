#ifndef GENERAL_HEADER
#define GENERAL_HEADER

#include <vector>
#include <string>
#include <iostream>

namespace Varzz{ // Variables that should be easily accessible across source files (e.g. flags, logs, whatnot)
    static std::vector<std::string> CMDHistory; // Command input log
    static bool Debug; // Should debug messages be shown?
    static bool DebugLog; // If debug is true, should they be logged to an output file?
}

namespace Funczz { // Reusable utility functions (side note: I want this to be a namespace alongside Varzz, but switching just causes a bunch of linker errors, and if it ain't broke don't fix it, so I'll keep it as a class for now)
    void DebugLog( // handles debugging
        std::string input, // the inputted text to log
        bool forceShow, // should the log be forced to the terminal regardless of if debugging is toggled on?
        bool isErr, // should the log be treated as an error/warning?
        bool shouldLog // should it be logged to an output file?
    );
    void printFile(std::string path); // prints a file to the terminal
    std::string lowercaseify(std::string& input); // returns the input with every character turned lowercase
    int randrange(int lowerbound, int upperbound); // Generates a random integer in a provided range
};

#endif