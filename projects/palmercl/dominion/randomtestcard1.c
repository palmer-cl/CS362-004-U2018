/*
Random Test Card 1 - Great Hall
Testing function: Great Hall
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"
#include <stdlib.h>

int main() {


	printf("Card test 2: Great Hall\n");
	int count = 0;
	int errorFlag = 0;

	// Call Great Hall multiple times
	do
	{
		//New Game
		struct gameState G;
		int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
			sea_hag, tribute, smithy };
		int numPlayers = 2 + (rand() % 3);
		int gameSeed = 1 + (rand() % 10);

		initializeGame(numPlayers, k, gameSeed, &G);

		int currentPlayer = 0;
		int check = 1;
		int mockHandPos = (rand() % 5);
		int originalActions = G.numActions;

		//Make Random
		check = greatHallEffect(&G, &currentPlayer, &mockHandPos);
		count++;


		//Num players are passed in correctly
		if (G.numPlayers <0 || G.numPlayers > 5) {
			errorFlag = 1;
		}

		//Check to make sure function finished normally
		if (check != 0) {
			errorFlag = 1;
		}

		//Check if one action was added
		if (G.numActions != (originalActions + 1)) {
			errorFlag = 1;
		}


	} while (count < 300 && errorFlag == 0);

	if (errorFlag != 1)
	{
		printf("Random Test - Great Hall PASSED\n");
		printf("\n\n");
	}

	else
	{
		printf("Random Test - Great Hall FAILED\n");
		printf("\n\n");

	}

	return 0;
}
