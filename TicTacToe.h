#pragma once
#include <iostream>
using namespace std;

#include "Board.h"
#include "Player.h"
#include "Coordinate.h"


class TicTacToe {
	Board _board;
	int _maxSteps;
	Player* _winner;

	void playAndVerify(Player& currentPlayer, char currentChar, Player& otherPlayer) {
		try {
			Coordinate move = currentPlayer.play(_board, currentChar);
		} catch (...) {
			_winner = &otherPlayer;
		}

		if (_board[move]=='.') {
			_board[move] = currentChar;
		} else { // illegal move
			_winner = &otherPlayer;
		}

		// Check winner in rows:
		for (int x=0; x<_board.size(); ++x) {
			
		}
	}

	
public:
	TicTacToe(int size): 
		_board(size), 
		_maxSteps(size*size),
		_winner(nullptr) {}

	void run(Player& xPlayer, Player& oPlayer) {
		_winner = nullptr;
		_board = ".";  // initialize board to empty
		for (uint i=0; i<_maxSteps; ++i) {
			playAndVerify(xPlayer, 'X');
			if (_winner) break;
			playAndVerify(oPlayer, 'O');
			if (_winner) break;
		}
	}

	const Board& board() { 
		return _board; 
	}

	const Player& winner() {
		return *_winner;
	}
};
