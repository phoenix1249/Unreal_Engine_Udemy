#include <iostream>
#include <string>
#include "main.h"


int main()
{	
	const int Length_Word = 5;
	const int nb_Try = 3;

	do
	{
		Intro(Length_Word);
		Play_Game(nb_Try);
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
	std::string guess = "";
	std::cout<<"Enter your guess: ";
	std::getline(std::cin,guess);
	return guess;
}

void Play_Game(int nb_Try)
{
	for (int i=0;i<nb_Try;i++)
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