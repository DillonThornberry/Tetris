#pragma once

class Piece {
public:
	void drop();
	virtual void rotate()=0;

private:
	int x;
	int y;

};