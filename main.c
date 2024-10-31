#include <stdio.h>
#include <string.h>
#include "RockPaperScissor.h"

char* RockPaperScissor(char player1[], char player2[]) {
	//Defines what values are valid
	const char* ValidMoves[] = { "Rock", "Paper", "Scissor" };


	if (strlen(player1) == 0 || strlen(player2) == 0) { //checks for empty strings
		return "Invalid";
	}

	int valid1 = 0;
	int valid2 = 0;
	for (int i = 0; i < 3; i++) { // checks to see if player1 and player 2 moves are valid
		if (strcmp(player1, ValidMoves[i]) == 0) {
			valid1 = 1;
		}

		if (strcmp(player2, ValidMoves[i]) == 0) {
			valid2 = 1;
		}
	}

	if (!valid1 || !valid2) { // if either input was invalid, it will return invalid
		return "Invalid";
	}

	if (strcmp(player1, player2) == 0) { //checks to see for draw conditions
		return "Draw";
	}


	// Checks all valid possibilites for a game
	if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissor") == 0) ||
		(strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
		(strcmp(player1, "Scissor") == 0 && strcmp(player2, "Paper") == 0)) {
		return "Player1";
	}

	return "Player2";


}




int main(void) {


}