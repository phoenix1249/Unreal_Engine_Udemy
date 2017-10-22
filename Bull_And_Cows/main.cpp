#include <iostream>
#include <string>
#include "main.h"
#include "FBullCowGame.h"

FBullCowGame BCGame;


int main(){	
	const int Length_Word = BCGame.GetUWLenght();

	do
	{
		Intro(Length_Word);
		Play_Game();
	}while (Play_Again());




	return 0;
};


void Intro(int nb_Letter) {
	std::cout<< "\nWelcome to Bull and Cows\n";
	std::cout<< "Can you guess the "<<nb_Letter<<" letters isogram I'm thinking of in less than "<<BCGame.GetMaxTries()<<" tries?\n";	
};

std::string GuessValidGuess(){
	int current_try=BCGame.GetCurrentTries();
	std::string guess = "";
	EGuessCheck Status = EGuessCheck::Invalid_Status;
	do{
		std::cout<<"Try "<<current_try<<": ";
		std::cout<<"Enter your guess: ";
		std::getline(std::cin,guess);
		Status=BCGame.CheckGuessValidity(guess);
		
		switch (Status){
			case EGuessCheck::Wrong_Length:
				std::cout<<"Please enter a "<<BCGame.GetUWLenght()<<" letters word\n\n";
				break;

			case EGuessCheck::Upper_Case:
				std::cout<<"Please use only lower case letters\n\n";
				break;

			case EGuessCheck::Not_Isogram:
				std::cout<<"Please use only letter\n\n";
				break;
			default:
				break;
		}
	}while(Status != EGuessCheck::OK);
	return guess;
};

void Play_Game() {
	BCGame.Reset();
	int Max_Tries = BCGame.GetMaxTries();

	while (!BCGame.IsGameWon() && BCGame.GetCurrentTries()<=Max_Tries){
		std::string Guess = "";
		Guess = GuessValidGuess();
		BullCowCount BCC=BCGame.SubmitGuess(Guess);
		std::cout<<"Bulls: "<<BCC.Bull<<" Cows: "<<BCC.Cow<<std::endl;
		std::cout<< "Your guess was: "<<Guess<<"\n\n";
	}
	PrintGameSummary();
};

bool Play_Again() {
	std::string ask="";
	std::cout<< "Play again ? (y/n)";
	std::getline(std::cin,ask);

	return (ask[0]=='y') || (ask[0]=='Y');
}

void PrintGameSummary(){
	if (BCGame.IsGameWon()){
		std::cout<<"Good Job You Win, ";
	}else{
		std::cout<<"Sorry maybe next time\n";
	}
}