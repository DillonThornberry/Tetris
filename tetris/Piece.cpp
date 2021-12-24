#include "Piece.h"

void Piece::drop() {
	y += 1;
}

void Piece::move(bool right) {
	x += ((right) ? 1 : -1);
}

pair<int, int> Piece::getCoordinates() {
	return pair<int, int>{ x, y };
}