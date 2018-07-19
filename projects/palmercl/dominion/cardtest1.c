/*
Card Test 1
Testing Card: smithy
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

	int check;
	
	printf("Card test 1: Smithy\n");
	// Check smithyEffect function returns the correct value
	check = cardEffect(smithy, 0, 0, 0, &G, 4, 0);


	//Check if function completed
	if (check == 0)
	{
		printf("Smithy function has PASSED.\n");

	}
	else
	{
		printf("Smithy function has FAILED.\n");

	}

	//Check if actions performed should equal 7 cards after draw 3 discard 1
	if (G.handCount[0] == 7)
	{
		printf("Smithy proper card count PASSED.");
	}
	else
	{
		printf("Smithy proper card count FAILED.");
	}

	printf("\n\n");


	return 0;
}
