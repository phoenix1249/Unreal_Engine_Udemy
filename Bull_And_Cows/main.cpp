#include <iostream>
#include <string>
#include "main.h"
#include "FBullCowGame.h"

FBullCowGame BCGame;


int main()
{	
	const int Length_Word = 5;

	do
	{
		Intro(Length_Word);
		Play_Game();
	}while (Play_Again());




	return 0;
}


void Intro(int nb_Letter)
{
	std::cout<< "Welcome to Bull and Cows\n";
	std::cout<< "Can you guess the "<<nb_Letter<<" letters isogram I'm thinking of?\n";	
}

std::string Guess_Word()
{
	int current_try=BCGame.GetCurrentTries();

	std::cout<<"Try "<<current_try<<" ";
	std::string guess = "";
	std::cout<<"Enter your guess: ";
	std::getline(std::cin,guess);
	return guess;
}

void Play_Game()
{
	BCGame.Reset();
	int Max_Tries = BCGame.GetMaxTries();
	std::cout<<Max_Tries<<std::endl;

	for (int i=0;i<Max_Tries;i++)
	{
		std::string Guess = "";
		Guess = Guess_Word();
		std::cout<< "Your guess was: "<<Guess<<std::endl<<std::endl;
	}
}

bool Play_Again()
{
	std::string ask="";
	std::cout<< "Play again ? (y/n)";
	std::getline(std::cin,ask);

	return (ask[0]=='y') || (ask[0]=='Y');
}