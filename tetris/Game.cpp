#include "Game.h"
#include "T.h"
#include <thread>
#include <chrono>
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using std::this_thread::sleep_for;
using std::chrono::milliseconds;

const int Game::FRAME_RATE = 20;
const int Game::INPUT_TIMEOUT = 5;

Game::Game() {
    currentPiece = generateRandomPiece();
}

void Game::play() {
    while (true) {


        gameBoard.show();
        sleep_for(milliseconds(1000 / Game::FRAME_RATE));
    }
}

Piece* Game::generateRandomPiece() {
    srand(time(NULL));

    int randPiece = 0; //rand() % 4;

    switch (randPiece) {
    case 0:
        return new T;
    }
}

/*
if (GetKeyState(VK_LEFT) & 0x8000) {
    std::cout << "left pressed";
}
*/