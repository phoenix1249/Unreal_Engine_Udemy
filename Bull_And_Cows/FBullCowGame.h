#ifndef fbcg
#define fbcg


#include <string>

struct BullCowCount
{
	int Bull=0;
	int Cow =0;
};

class FBullCowGame {
public:
	FBullCowGame();

	int GetMaxTries() const;
	int GetCurrentTries() const;
	bool IsGameWon() const;

	void Reset();
	bool CheckGuessValidity(std::string);

	BullCowCount SubmitGuess(std::string);


private:
	std::string UnknowWord;
	int MyCurrentTries;
	int MyMaxTries;


};

#endif