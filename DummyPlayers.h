#pragma once

#include "Player.h"



/* This player scans the board looping on x then on y, and puts its symbol on the first empty cell. */
class XYPlayer: public Player {
public:
	const string name() const override { return "XYPlayer"; }
	const Coordinate play(const Board& board) override;
};


/* This player scans the board looping on y then on x, and puts its symbol on the first empty cell. */
class YXPlayer: public Player {
public:
	const string name() const override { return "YXPlayer"; }
	const Coordinate play(const Board& board) override;
};


/* This player makes illegal moves. It should always lose. */
class IllegalPlayer: public Player {
public:
	const string name() const override { return "YXPlayer"; }
	const Coordinate play(const Board& board) override;
};


/* This player throws exceptions. It should always lose. */
class ExceptionPlayer: public Player {
public:
	const string name() const override { return "YXPlayer"; }
	const Coordinate play(const Board& board) override;
};

