#include <iostream>
#include <string>
#include "FBullCowGame.h"


int FBullCowGame::GetMaxTries() const {return MyMaxTries;};
int FBullCowGame::GetCurrentTries() const {return MyCurrentTries;};
int FBullCowGame::GetUWLenght() const {return UnknowWord.length();};
bool FBullCowGame::IsGameWon() const {return GameWon;};

FBullCowGame::FBullCowGame(){Reset();};


void FBullCowGame::Reset(){
	MyMaxTries=3;
	MyCurrentTries=1;
	UnknowWord="ant";
	GameWon=false;
	return;
};

EGuessCheck FBullCowGame::CheckGuessValidity(std::string Guess) const{
	if (false){

		return EGuessCheck::Not_Isogram;

	}else if (false){

		return EGuessCheck::Upper_Case;

	}else if(Guess.length()!=UnknowWord.length()){

		return EGuessCheck::Wrong_Length;

	}else{
		return EGuessCheck::OK;
	}
};

BullCowCount FBullCowGame::SubmitGuess(std::string Guess){
	MyCurrentTries++;
	BullCowCount BCC;
	int WordLength=UnknowWord.length();

	for (int i=0;i<WordLength;i++){

		for (int j=0;j<WordLength;j++){
			if (Guess[i]==UnknowWord[j]){
				if (i==j){
					BCC.Bull++;
				}else{
					BCC.Cow++;
				}
			}

		}
	}
	GameWon=(BCC.Bull==GetUWLenght());
	return BCC;
};
