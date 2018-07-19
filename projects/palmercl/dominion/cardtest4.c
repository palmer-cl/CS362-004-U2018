/*
Card Test 4
Testing Card: outpost
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"
#include "interface.h"

int main() {
	//Game setup for test
	struct gameState G;
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	initializeGame(2, k, 5, &G);

	printf("Card test 4: Outpost\n");
	// Check Outpost function returns the correct value

	int check = cardEffect(outpost, 0, 0, 0, &G, 3, 0);

	//Check if function completed
	if (check == 0)
	{
		printf("Outpost function has PASSED.\n");

	}
	else
	{
		printf("Outpost function has FAILED.\n");

	}

	//Check if action outpost flag is set to one
	if (G.outpostPlayed == 1)
	{
		printf("Outpost flag PASSED.\n");
	}
	else
	{
		printf("Outpost flag FAILED.\n");
	}

	//Check if number of cards left in hand is correct
	if (G.handCount[0] == 4)
	{
		printf("Outpost leaves proper amount of cards PASSED.");
	}
	else
	{
		printf("Outpost leaves proper amount of cards FAILED.");
	}

	printf("\n\n");


	return 0;
}
