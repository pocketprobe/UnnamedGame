# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall -std=c++11

all: game

game: main.o clock.o
	$(CC) main.o clock.o -o game

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clock.o: lib/clock.cpp
	$(CC) $(CFLAGS) lib/clock.cpp

clean:
	rm *.o game
