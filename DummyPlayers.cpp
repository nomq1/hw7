#include "TopBottomPlayer.h"


const Coordinate XYPlayer::play(const Board& board, char yourChar) {
	for (int x=0; x<board.size(); ++x) {
		for (int y=0; y<board.size(); ++y) {
			Coordinate c{x,y};
			if (board[c]=='.') {
				return c;
			}
		}
	}
	return {0,0};  // did not find an empty square - quit
}


const Coordinate YXPlayer::play(const Board& board, char yourChar) {
	for (int y=0; y<board.size(); ++y) {
		for (int x=0; x<board.size(); ++x) {
			Coordinate c{x,y};
			if (board[c]=='.') {
				return c;
			}
		}
	}
	return {0,0};  // did not find an empty square - quit
}



const Coordinate IllegalPlayer::play(const Board& board, char yourChar) {
	for (int y=0; y<board.size(); ++y) {
		for (int x=0; x<board.size(); ++x) {
			Coordinate c{x,y};
			if (board[c]!='.') {
				return c;
			}
		}
	}
}


const Coordinate ExceptionPlayer::play(const Board& board, char yourChar) {
	throw string("hahaha");
}
