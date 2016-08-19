all: main.cpp 
	g++ -g -Wall -o game main.cpp

clean: 
	$(RM) game

