#ifndef CMD_Header
#define CMD_Header

#include <string>

class CMD {
    public:
    static void VocabExtract_Main();
    static void RandomSongGen_Main();
    static void ItAdd_Main();
    static void SHOWTHEGITIGNORE_Main();
    static void CMDHistory_Main();
    static void AHiddenCommandNotShownInHelp_Main();

    private:
    static void MysteryFunction(); // DO NOT CALL! BAD THINGS WILL HAPPEN!
};

#endif