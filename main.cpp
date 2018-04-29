#include "TicTacToe.h"
#include "DummyPlayers.h"


int main() {
	TicTacToe game(4);       // Initializes a game on a 4x4 board
	XYPlayer player1;             // Creates a player with a lousy strategy
	YXPlayer player2;           // Creates YOUR player, with a winning strategy

	game.run(player1, player2);
	cout << "The first winner is " << game.winner().name() << endl;
	cout << "The board after the first game is " << game.board()  << endl;

	game.run(player2, player1);  
	cout << "The second winner is " << game.winner().name() << endl;
	cout << "The board after the second game is " << game.board()  << endl;

	return 0;
}

