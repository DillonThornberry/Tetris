#include "Game.h"
#include <thread>
#include <chrono>
#include <iostream>
#include <Windows.h>

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

const int Game::FRAME_RATE = 20;
const int Game::INPUT_TIMEOUT = 5;

void Game::play() {
    while (true) {
        sleep_for(milliseconds(1000 / Game::FRAME_RATE));
        gameBoard.show();
    }
}

/*
if (GetKeyState(VK_LEFT) & 0x8000) {
    std::cout << "left pressed";
}
*/