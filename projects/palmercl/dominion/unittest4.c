/*
Unit Test 4
Testing function: getCost
Input: Card Number - as an enum
Output: Car number as an integer
Assert: Return of correct values
*/

#include "dominion.h"
#include <stdio.h>
#include "dominion_helpers.h"


int main() {

	int result;

	// Test curse returns 0
	result = getCost(curse);
	
	printf("Starting unit test 4 (getCost):\n");

	if (result == 0)
	{
		printf("getCost of CURSE test PASSED\n");
	}
	else
	{
		printf("TEST FAILED.");
	}

	//Test mine returns 5
	result = getCost(100);

	if (result == -1)
	{
		printf("getCost of INVALID CARD test PASSED\n");
	}
	else
	{
		printf("TEST FAILED.");
	}

	//Test mine returns 5
	result = getCost(mine);

	if (result == 5)
	{
		printf("getCost of MINE test PASSED\n");
	}
	else
	{
		printf("TEST FAILED.");
	}

	printf("\n\n");

	return 0;


}
