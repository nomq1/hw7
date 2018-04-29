

#include "TicTacToe.h"
#include "DummyPlayers.h"


int main() {
	TicTacToe game(4);       // Initializes a game on a 4x4 board
	XYPlayer player1;
	YXPlayer player2;
	IllegalPlayer player3;
	ExceptionPlayer player4;

	game.run(player1, player2);  game.printResults();
	/*
    	And the winner is XYPlayer, playing as X!
		The final board is 
		XXXX
		O...
		O...
		O...
	*/

	game.run(player2, player1);  game.printResults();
	/*
        And the winner is YXPlayer, playing as X!
		The final board is 
		XOOO
		X...
		X...
		X...
	*/

	game.run(player1, player3);  game.printResults();
	/*
        And the winner is XYPlayer, playing as X!
		The final board is 
		X...
		....
		....
		....
	*/


	game.run(player3, player1);  game.printResults();
	/*
        And the winner is XYPlayer, playing as O!
		The final board is 
		XO..
		....
		....
		....
	*/

	game.run(player2, player4);  game.printResults();
	/*
		And the winner is YXPlayer, playing as X!
		The final board is 
		X...
		....
		....
		....
	*/

	game.run(player4, player2);  game.printResults();
	/*
		And the winner is YXPlayer, playing as O!
		The final board is 
		X...
		....
		....
		....
	*/

	return 0;
}

