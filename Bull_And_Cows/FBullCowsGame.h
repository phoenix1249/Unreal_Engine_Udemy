#include <iostream>
#include <string>

class FBull_Cows_Game
{
public:
	int GetMaxTries();
	int GetCurrentTries();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);
	void Reset();

private:
	std::string Unknow_Word;
	int MyCurrentTries;
	int MyMaxTries;
	bool WordFind(std::string guess);

};