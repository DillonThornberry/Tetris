#include "Board.h"
#include <iostream>
#include <string>

const int Board::HEIGHT = 20;
const int Board::WIDTH = 10;

using std::cout;
using std::endl;
using std::string;

Board::Board() {
	for (int i = 0; i < HEIGHT; i++) {
		grid.push_back(vector<bool>(WIDTH, false));
	}
}

void Board::show() {
	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			cout << (grid[i][j] ? "1" : "0");
		}
		cout << endl;
	}
	cout << string(10, '\n');
}