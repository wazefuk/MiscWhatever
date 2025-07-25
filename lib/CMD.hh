#ifndef CMD_Header
#define CMD_Header

#include <string>

namespace CMD { // A namespace full of pretty much everything to do with commands
    struct CMD_run { // runner functions for commands
        static void VocabExtract_Main();
        static void RandomSongGen_Main();
        static void ItAdd_Main();
        static void SHOWTHEGITIGNORE_Main();
        static void CMDHistory_Main();
        static void AHiddenCommandNotShownInHelp_Main();
        static void MysteryFunction(); // DO NOT CALL! BAD THINGS WILL HAPPEN!
    };
    static std::string CMDExp[] = { // Command Explanations
        "HELP - Shows this message",
        "EXIT - Exits the program",
        "VOCABEXTRACT - A simple(?) word deduplication tool",
        "RANDOMSONGGEN - Generates a random song's lyrics",
        "ITADD - Worlds worst interpreter for the world's world language (isn't even turing complete!)",
        "SHOWTHEGITIGNORE - Prints the projects .gitignore (only works if you're running this in the repository folder)",
        "CMDHISTORY - Shows every command you've run",
        "SUPERDUPEREXIT - Exits the program via segfault (may cause unintended behavior)",
        "DEBUG - Toggles debug mode",
        "DEBUGLOG - Toggles the logging of debug messages"
    };
}

#endif