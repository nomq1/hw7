#pragma once

#include "Player.h"



/* This player scans the board looping on x then on y, and puts its symbol on the first empty cell. */
class XYPlayer: public Player {
public:
	override const string name() { return "XYPlayer"; }
	override const Coordinate play(const Board& board, char yourChar);
};


/* This player scans the board looping on y then on x, and puts its symbol on the first empty cell. */
class YXPlayer: public Player {
public:
	override const string name() { return "YXPlayer"; }
	override const Coordinate play(const Board& board, char yourChar);
};


/* This player makes illegal moves. It should always lose. */
class IllegalPlayer: public Player {
public:
	override const string name() { return "YXPlayer"; }
	override const Coordinate play(const Board& board, char yourChar);
};


/* This player throws exceptions. It should always lose. */
class ExceptionPlayer: public Player {
public:
	override const string name() { return "YXPlayer"; }
	override const Coordinate play(const Board& board, char yourChar);
};

