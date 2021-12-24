#pragma once

#include "Piece.h"

class T : public Piece {
public:
	T();
	void rotate() override;

	static boolGrid state0, state1, state2, state3;
};