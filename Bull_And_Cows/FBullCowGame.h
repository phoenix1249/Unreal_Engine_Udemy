#ifndef fbcg
#define fbcg

#include <string>

struct BullCowCount
{
	int Bull=0;
	int Cow =0;
};

enum class EGuessCheck{
	OK,
	Not_Isogram,
	Upper_Case,
	Invalid_Status,
	Wrong_Length
};

class FBullCowGame {
public:
	FBullCowGame();

	int GetMaxTries() const;
	int GetCurrentTries() const;
	int GetUWLenght() const;
	bool IsGameWon() const;
	EGuessCheck CheckGuessValidity(std::string) const;

	void Reset();
	BullCowCount SubmitGuess(std::string);


private:
	std::string UnknowWord;
	int MyCurrentTries;
	int MyMaxTries;
	bool GameWon;


};

#endif