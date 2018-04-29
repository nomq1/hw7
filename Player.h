#pragma once

#include "Coordinate.h"
#include "Board.h"
#include <string>

/**
 * An abstract player.
 */
class Player {
public:

	/**
	 *  Returns the next move, given the current board.
	 */
	virtual const Coordinate play(const Board& board, char yourChar) = 0; 

	/**
	 *  Returns the name of the current player.
	 */
	virtual const std::string name(); 
};

