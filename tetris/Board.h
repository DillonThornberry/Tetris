#pragma once
#include <vector>

using std::vector;

typedef vector< vector<bool> > boolGrid;
class Board {
public:
    Board();
    void show();

private:
    static const int HEIGHT;
    static const int WIDTH;
    boolGrid grid;
};