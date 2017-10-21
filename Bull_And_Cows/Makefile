main: main.o FBullCowGame.o
	g++ -std=c++11 -o main main.o FBullCowGame.o

main.o: main.cpp main.h FBullCowGame.h
	g++ -std=c++11 -Wall -c main.cpp
	
FBullCowGame.o: FBullCowGame.cpp FBullCowGame.h
	g++ -std=c++11 -Wall -c FBullCowGame.cpp

clean:
	rm *.o main