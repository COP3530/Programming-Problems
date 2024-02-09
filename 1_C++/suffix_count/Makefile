
CC = g++
CFLAGS = -std=c++14 -Werror -Wuninitialized -g

run: build/test
	./build/test

build/test: build/catch_amalgamated.o src/*.h test-unit/test.cpp
	$(CC) $(CFLAGS) -o build/test test-unit/test.cpp build/catch_amalgamated.o

build/catch_amalgamated.o: test-unit/catch/catch_amalgamated.cpp test-unit/catch/catch_amalgamated.hpp
	$(CC) $(CFLAGS) -c -o build/catch_amalgamated.o test-unit/catch/catch_amalgamated.cpp

clean:
	rm -f build/test build/catch_amalgamated.o
