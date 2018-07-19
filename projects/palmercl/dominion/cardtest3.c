/*
Card Test 3
Testing Card: village
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"

int main() {
	//Game setup for test
	struct gameState G;
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	initializeGame(2, k, 5, &G);

	printf("Card test 3: Village\n");
	// Check villageEffect function returns the correct value

	int check = cardEffect(village, 0, 0, 0, &G, 4, 0);

	//Check if function completed
	if (check == 0)
	{
		printf("Village function has PASSED.\n");

	}
	else
	{
		printf("Village function has FAILED.\n");

	}

	//Check if actions performed should equal 1 additional card and one discard so same amount
	if (G.handCount[0] == 5)
	{
		printf("Village proper card count PASSED.\n");
	}
	else
	{
		printf("Village proper card count FAILED.\n");
	}

	//Check if number of actions is correct, should be plus 2.
	if (G.numActions == 3)
	{
		printf("Village proper action count PASSED.");
	}
	else
	{
		printf("Village proper action count FAILED.");
	}

	printf("\n\n");


	return 0;
}
