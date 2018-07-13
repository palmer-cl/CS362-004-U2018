/*
Unit Test 2
Testing function: initializeGame
Input: numPlayers, cards, randomSeed, GameState
Output: Returns game ready to play
Assert: Assert Game is set up
*/

#include "dominion.c"

int main() {

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  printf ("Starting game.\n");

  initializeGame(2, k, 5, &G);

  //Num players are passed in correctly
  if (state->numPlayers == 2){
    printf("Correct num players PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
    return 0;
  }

  //Loop to make curse card is assigned properly
  if(state->supplyCount[curse] == 10) {
    printf("Correct curse card assigned PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
    return 0;
  }

  //Check player hand size
  if (state->handCount[i] = 0 && state->discardCount[i] == 0) {
    printf("Correct hand and discard number of cards PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
    return 0;
  }


  printf("ALL TESTS PASSED\n");

  return 0;
}
