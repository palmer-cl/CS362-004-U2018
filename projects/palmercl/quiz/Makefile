CFLAGS = -Wall -fpic -coverage -lm -std=c99

testme.o: testme.c
	gcc -c testme.c -g  $(CFLAGS)

testme: testme.o
	gcc -o testme -g testme.o $(CFLAGS)
	./testme

clean:
	rm -f *.o *.exe *.gcda *.gcno
