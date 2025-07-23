#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

#include "lib/General.hh"
#include "lib/CMD.hh"

void playMysterySound() {
    PlaySound(TEXT("AAAAAA.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

void CMD::CMD_run::MysteryFunction() {
    std::cout << "MYSTERY FUNCTION HAS BEEN RUN LOLLLLLLLLLLLLL L BOZO LMAO\n";
    playMysterySound();
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(Funczz::randrange(0,16)));
        switch (Funczz::randrange(0,3)) {
            case 0:
                std::cout << "ERROR: DEREFERENCING OF NULLPTR\n";
                break;
            case 1:
                for (int i = 0; i < Funczz::randrange(4,25); i++) {
                    std::cout << "YOUR COMPUTER HAS BEEN HACKED BY THE COOL KIDS OF NORTH CAROLINA\n";
                }
                break;
            case 2:
                std::cout << "▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯";
                break;
            case 3:
                for (int i = 0; i < Funczz::randrange(4,240); i++) {
                    std::cout << "LOL NOOB        ";
                }
                break;
            default:
                std::cout << "FUCKING IDIOT\n";
                break;
        }
    }
}