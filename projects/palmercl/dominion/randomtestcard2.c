/*
Random Test Card 3 - Smithy
Testing function: Smithy
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"
#include <stdlib.h>

int main() {


	printf("Card test 3: Smithy\n");
	int count = 0;
	int errorFlag = 0;

	// Call Smithy multiple times
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
		int startingNumCards = G.handCount[currentPlayer];

		//Make Random
		check = smithyEffect(&G, &currentPlayer, &mockHandPos);
		count++;


		//Num players are passed in correctly
		if (G.numPlayers <0 || G.numPlayers > 5) {
			errorFlag = 1;
		}

		//Check to make sure function finished normally
		if (check != 0) {
			errorFlag = 1;
		}

		//Check if 3 cards were drawn and one was discarded
		if (G.handCount[currentPlayer] != (startingNumCards + 2)) {
			errorFlag = 1;
		}


	} while (count < 300 && errorFlag == 0);

	if (errorFlag != 1)
	{
		printf("Random Test - Smithy PASSED\n");
		printf("\n\n");
	}

	else
	{
		printf("Random Test - Smithy FAILED (known introduced bug)\n");
		printf("\n\n");

	}

	return 0;
}
