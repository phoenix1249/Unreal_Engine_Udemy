#include <iostream>
#include <string>
#include "FBullCowGame.h"


int FBullCowGame::GetMaxTries() const {return MyMaxTries;};
int FBullCowGame::GetCurrentTries() const {return MyCurrentTries;};


FBullCowGame::FBullCowGame(){Reset();}


void FBullCowGame::Reset()
{
	MyMaxTries=8;
	MyCurrentTries=1;
	UnknowWord="tree";
	return;
};


bool FBullCowGame::IsGameWon() const
{
	return false;
};

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
};

BullCowCount SubmitGuess(std::string)
{
	MyCurrentTries++;
	BullCowCount BCC;

	return BCC;
}