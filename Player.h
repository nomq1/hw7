#pragma once

#include "Coordinate.h"
#include "Board.h"
#include <string>

using Coordinate=Pair;

/**
 * An abstract player.
 */
class Player {
protected:
	char myChar;
public:

	void setChar(char c) { myChar = c; }
	char getChar() const { return myChar; }

	/**
	 *  Returns the next move, given the current board.
	 */
	virtual const Coordinate play(const Board& board) = 0; 

	/**
	 *  Returns the name of the current player.
	 */
	virtual const std::string name() const = 0; 
};

