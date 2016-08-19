all: main.cpp 
	g++ -g -Wall -std=c++11 -o game main.cpp

clean: 
	$(RM) game

