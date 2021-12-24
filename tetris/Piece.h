#pragma once
#include <vector>


using std::vector;
using std::pair;

typedef vector< vector<bool> > boolGrid;

class Piece {
public:
	void drop();
	void move(bool right);
	virtual void rotate()=0;
	pair<int, int> getCoordinates();

protected:
	boolGrid* pieceGrid;

private:
	int x = 5;
	int y = 0;
	
};