#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <future>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

#include "General.hh"
#include "CMD.hh"

std::random_device rd;
std::mt19937 gen(rd());

void playMysterySound() {
    PlaySound(TEXT("AAAAAA.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

int randrange(int lowerbound, int upperbound) {
    std::uniform_int_distribution<> distr(lowerbound, upperbound);
    return distr(gen);
}

void CMD::CMD_run::MysteryFunction() {
    std::cout << "MYSTERY FUNCTION HAS BEEN RUN LOLLLLLLLLLLLLL L BOZO LMAO\n";
    playMysterySound();
    while (true) {
        std::this_thread::sleep_for(std::chrono::milliseconds(randrange(0,16)));
        switch (randrange(0,3)) {
            case 0:
                std::cout << "ERROR: DEREFERENCING OF NULLPTR\n";
                break;
            case 1:
                for (int i = 0; i < randrange(4,25); i++) {
                    std::cout << "YOUR COMPUTER HAS BEEN HACKED BY THE COOL KIDS OF NORTH CAROLINA\n";
                }
                break;
            case 2:
                std::cout << "▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯▯";
                break;
            case 3:
                for (int i = 0; i < randrange(4,240); i++) {
                    std::cout << "LOL NOOB        ";
                }
                break;
            default:
                std::cout << "FUCKING IDIOT\n";
                break;
        }
    }
}