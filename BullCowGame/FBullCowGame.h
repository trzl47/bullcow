#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); // TODO make a more rich return value
	int GetMaxTries();
	int GetCurrentTry;
	bool IsGameWon();
	bool checkGuess(std::string);
	bool checkChallenge(std::string);


private:


};