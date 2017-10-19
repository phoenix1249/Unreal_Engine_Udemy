main: main.o FBullCowGame.o
	clear
	g++ -o main main.o FBullCowGame.o

main.o: main.cpp main.h FBullCowGame.h
	g++ -Wall -c main.cpp
	
FBullCowGame.o: FBullCowGame.cpp FBullCowGame.h
	g++ -Wall -c FBullCowGame.cpp

clean:
	rm *.o main