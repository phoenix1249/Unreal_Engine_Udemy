#include <string>

class FBullCowsGame
{
public:
	void Reset();
	int GetMaxTries();
	int GetCurrentTries();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);


private:
	std::string Unknow_Word;
	int MyCurrentTries;
	int MyMaxTries;
	bool WordFind(std::string guess);

};
