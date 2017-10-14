#include <iostream>
#include <string>
#include "main.h"


int main()
{	
	const int Length_Word = 5;
	const int nb_Try = 3;

	Intro(Length_Word);
	PlayGame(nb_Try);



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

void PlayGame(int nb_Try)
{
	for (int i=0;i<nb_Try;i++)
	{
		std::string Guess = "";
		Guess = Guess_Word();
		std::cout<< "Your guess was: "<<Guess<<std::endl<<std::endl;
	}
}