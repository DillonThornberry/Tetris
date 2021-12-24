#pragma once
#include "Piece.h"
#include "Board.h"

class Game {
public:
    void play();

private:
    Board gameBoard;
    Piece* currentPiece;
    int currentLevel = 1;
    int framesPerDrop = 10;
    int linesCleared = 0;
    static const int FRAME_RATE;
    static const int INPUT_TIMEOUT;
};