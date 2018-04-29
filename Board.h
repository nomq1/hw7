#pragma once
#include <iostream>
using namespace std;

#include "IllegalCharException.h"
#include "IllegalCoordinateException.h"
#include "Coordinate.h"


void verify(char c) {
	if (c!='.' && c!='X' && c!='O')
		throw IllegalCharException{c};
}


class BoardLocation {
	char& loc;
public:
	BoardLocation(char& loc): loc(loc) {}
	BoardLocation& operator=(char c) {
		verify(c);
		loc = c;
		return *this;
	}
};

/**
 * Represents a tic-tac-toe board.
 */
class Board {
	char* theChars;
	int theSize;

	uint offset(int x, int y) const {
		return x + y*theSize;
	}

public:
	Board(int size): theSize(size), theChars(new char[size*size]) {
		operator=('.');
	}

	Board& operator=(char c) {
		verify(c);
		for(int i=0; i<theSize*theSize; ++i) {
			theChars[i] = '.';
		}
		return *this;
	}

	char operator[] (Coordinate c) const {
		if (c.x>=theSize || c.x<0 || c.y>=theSize || c.y<0)
			throw IllegalCoordinateException{c};
		return theChars[offset(c.x,c.y)];
	}

	BoardLocation operator[] (Coordinate c) {
		if (c.x>=theSize || c.x<0 || c.y>=theSize || c.y<0)
			throw IllegalCoordinateException{c};
		return BoardLocation(theChars[offset(c.x,c.y)]);
	}

	ostream& output(ostream& out) const {
		for (int y=0; y<theSize; ++y) {
			for (int x=0; x<theSize; ++x) {
				out << theChars[offset(x,y)];
			}
			out << endl;
		}
		return out;
	}
};

ostream& operator<<(ostream& out, const Board& board) {
	return board.output(out);
}