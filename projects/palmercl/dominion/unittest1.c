/*
Unit Test 1
Testing function: kingdomCards
Input: 10 card numbers
Output: Returns an array of card values
Assert: The correct card numbers are returned
*/

#include "dominion.h"
#include <stddef.h>
#include <stdio.h>


int main() {
	int * cardArr = NULL;

  //Pass card numbers
	cardArr = kingdomCards(10, 20, 30, 40, 50, 60, 70, 80, 90, 100);

	printf("Starting unit test 1 (kingdomCards):\n");

  //Check Edge cases of cardArr
  if (cardArr[0] == 10) {
    printf("Card at first position PASSED\n");
  }
  else {
    printf("UNIT TEST 1 FAILED.\n");
  }

  if (cardArr[4] == 50) {
    printf("Card at fourth position PASSED\n");
  }
  else {
    printf("UNIT TEST 1 FAILED.\n");
  }

  if (cardArr[9] == 100) {
    printf("Card at first position PASSED\n");
  }
  else {
    printf("UNIT TEST 1 FAILED.\n");
  }

  printf("\n\n");

  return 0;
}
