
CC = g++
CFLAGS = -std=c++14 -Werror -Wuninitialized -g

run: test
	./test

test: catch_amalgamated.o src/*.h test-unit/test.cpp
	$(CC) $(CFLAGS) -o test test-unit/test.cpp catch_amalgamated.o

catch_amalgamated.o: test-unit/catch/catch_amalgamated.cpp test-unit/catch/catch_amalgamated.hpp
	$(CC) $(CFLAGS) -c -o catch_amalgamated.o test-unit/catch/catch_amalgamated.cpp

clean:
	rm -f test catch_amalgamated.o
