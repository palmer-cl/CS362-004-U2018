/*
Unit Test 5
Testing function: updateCoins
Input: GameState, player turn, bonus
Output: Returns 0 but updates state's coin variable
Assert: Different bonuses passed give different number of coins
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"

int main() {

	struct gameState G;
	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	initializeGame(2, k, 5, &G);
	
	int currentPlayer = 0;
	
	printf("Starting unit test 5 (updateCoins):\n");
	
	// Player should have 5 coppers with no bonus
	for (int b = 0; b <numHandCards(&G); b++)
	{
		G.hand[currentPlayer][b] = copper;
	}

	updateCoins(currentPlayer, &G, 0);
	printf("coins: %d\n", G.coins);

	if (G.coins == 5)
	{
		printf("No bonus test PASSED.\n");
	}

	else
	{
		printf("No bonus test FAILED.\n");
	}

	//Now add a bonus to make sure the tests pass
	updateCoins(currentPlayer, &G, 2);


	if (G.coins == 7)
	{
		printf("2 bonus test PASSED.\n");
	}

	else
	{
		printf("2 bonus test FAILED.\n");
	}
	
	printf("\n\n");

	return 0;
}
