/*
Card Test 2
Testing Card: adventurer
*/

#include "dominion.h"
#include <stdio.h>

int main() {
	//Game setup for test
	//Variables needed
	// int adventurerEffect(int *drawntreasure, struct gameState *state, int *currentPlayer, int *cardDrawn, int *temphand, int *z) {
	
	struct gameState G;
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	initializeGame(2, k, 1, &G);

	int currentPlayer = 0;
	int cardDrawn;
	int check;
	int drawntreasure = 0;
	int temphand[MAX_HAND];// moved above the if statement
	int z = 0;

	printf("Card test 2: Adventurer\n");

	//Check smithyEffect function returns the correct value
	check = adventurerEffect(&drawntreasure, &G, &currentPlayer, &cardDrawn, temphand, &z);

	if (check == 0)
	{
		printf("Adventurer function finish completion has PASSED.\n");

	}
	else
	{
		printf("Adventurer function finish completion has FAILED.\n");

	}

	//Check to make sure we drew 2 treasure cards
	if (drawntreasure == 2)
	{
		printf("Draw 2 treasure cards PASSED.");
	}
	else
	{
		printf("Draw 2 treasure cards FAILED.");

	}

	printf("\n\n");


	return 0;
}
