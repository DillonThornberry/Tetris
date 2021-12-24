#include "T.h"

T::T() {
	pieceGrid = &state0;
}

void T::rotate() {
	if (pieceGrid == &state0) {
		pieceGrid = &state1;
	}
	else if (pieceGrid == &state1){
		pieceGrid = &state2;
	}
	else if (pieceGrid == &state2) {
		pieceGrid = &state3;
	}
	else {
		pieceGrid = &state0;
	}
}

boolGrid state0 = {
	{0, 1, 0},
	{1, 1, 1,}
};

const boolGrid state1 = {
	{0, 1, 0},
	{0, 1, 1,},
	{0, 1, 0}
};

const boolGrid state2 = {
	{0, 0, 0},
	{1, 1, 1,},
	{0, 1, 0}
};

const boolGrid state3 = {
	{0, 1, 0},
	{1, 1, 0,},
	{0, 1, 0}
};

