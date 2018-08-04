CFLAGS = -Wall -fpic -coverage -lm -std=c99

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
randomtestadventurer: randomtestadventurer.c dominion.o rngs.o
	gcc  -o randomtestadventurer -g  randomtestadventurer.c dominion.o rngs.o $(CFLAGS)

randomtestcard1: randomtestcard1.c dominion.o rngs.o
	gcc  -o randomtestcard1 -g  randomtestcard1.c dominion.o rngs.o $(CFLAGS)

randomtestcard2: randomtestcard2.c dominion.o rngs.o
	gcc  -o randomtestcard2 -g  randomtestcard2.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

randomtestresults: randomtestadventurer randomtestcard1 randomtestcard2
	echo "Result for running all dominion tests:" &> randomtestresults.out
	./randomtestadventurer >> randomtestresults.out
	gcov randomtestadventurer.c >> randomtestresults.out
	echo "Test coverage on dominion.c with 1 of 3 tests run:" >> randomtestresults.out
	gcov dominion.c -b >>randomtestresults.out
	./randomtestcard1 >> randomtestresults.out
	gcov randomtestcard1.c >> randomtestresults.out
	echo "Test coverage on dominion.c with 2 of 3 tests run:" >> randomtestresults.out
	gcov dominion.c -b >>randomtestresults.out
	./randomtestcard2 >> randomtestresults.out
	gcov randomtestcard2.c >> randomtestresults.out
	echo "Test coverage on dominion.c with 2 of 3 tests run:" >> randomtestresults.out
	gcov dominion.c -b >>randomtestresults.out
	echo "Result for random test Adventurer:" &> randomtestadventurer.out
	./randomtestadventurer >> randomtestadventurer.out
	gcov randomtestadventurer.c >> randomtestadventurer.out
	echo "Test coverage on dominion.c with 1 of 3 tests run:" >> randomtestadventurer.out
	gcov dominion.c -b >>randomtestadventurer.out
	echo "Result for random test Card 1:" &> randomtestcard1.out
	./randomtestcard1 >> randomtestcard1.out
	gcov randomtestcard1.c >> randomtestcard1.out
	echo "Test coverage on dominion.c with 2 of 3 tests run:" >> randomtestcard1.out
	gcov dominion.c -b >>randomtestcard1.out
	echo "Result for random test Card 2:" &> randomtestcard2.out
	./randomtestcard2 >> randomtestcard2.out
	gcov randomtestcard2.c >> randomtestcard2.out
	echo "Test coverage on dominion.c with 3 of 3 tests run:" >> randomtestcard2.out
	gcov dominion.c -b >>randomtestcard2.out

player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player

clean:
	rm -f *.o *.exe playdom player *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe tests.out