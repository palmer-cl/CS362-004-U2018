/*
Unit Test 2
Testing function: initializeGame
Input: numPlayers, cards, randomSeed, GameState
Output: Returns game ready to play
Assert: Assert Game is set up
*/

#include "dominion.h"
#include <stdio.h>

int main() {

  struct gameState G;
  int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
           sea_hag, tribute, smithy};

  initializeGame(2, k, 5, &G);

  printf("Starting unit test 2 (initializeGame):\n");

  //Num players are passed in correctly
  if (G.numPlayers == 2){
    printf("Correct num players PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
  }

  //Loop to make curse card is assigned properly
  if(G.supplyCount[curse] == 10) {
    printf("Correct curse card assigned PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
  }

  //Check player hand size
  if (G.handCount[1] == 0 && G.discardCount[0] == 0) {
    printf("Correct hand and discard number of cards PASSED\n");
  }
  else {
    printf("UNIT TEST 2 FAILED.\n");
  }


  printf("\n\n");

  return 0;
}
