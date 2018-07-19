/*
Unit Test 3
Testing function: isGameOver
Input: GameState
Output: Returns if the game is over or not
Assert: Assert game is over or game is not over
*/

#include "dominion.h"
#include <stdio.h>

int main() {

	struct gameState G;
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	initializeGame(2, k, 5, &G);

	printf("Starting unit test 3 (isGameOver):\n");

	//Check game is not over
	if(!isGameOver(&G))
	{
		printf("Game is not over PASSED\n");
	}
	else {
		printf("UNIT TEST 2 FAILED.\n");
	}

	//Change game over to true
	//Test game is over
	G.supplyCount[province] = 0;
	if(isGameOver(&G))
	{
		printf("Game is over PASSED\n");
	}
	else {
		printf("UNIT TEST 2 FAILED.\n");
	}

	//Reset
	G.supplyCount[province] = 10;

	//Change 3 supply count piles to 0 so we trigger game over
	for (int a = 0; a < 3; a++)
	{
		G.supplyCount[a] = 0;
	}

	//Test if Game is over
	if (isGameOver(&G))
	{
		printf("Game is over PASSED\n");
	}
	else {
		printf("UNIT TEST 2 FAILED.\n");
	}

	printf("\n\n");

	return 0;
}
