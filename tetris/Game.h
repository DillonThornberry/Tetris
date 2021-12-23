#pragma once

#include "Board.h"

class Game {
public:
    void play();

private:
    Board gameBoard;
    int currentLevel = 1;
    int dropSpeed = 1;
    int linesCleared = 0;
    static const int FRAME_RATE;
};