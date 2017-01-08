#pragma once
#include <string>

class FBullCowGame {
public:

	void Reset(); //TODO make a more rich return value.
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool GameWon() const;
	bool CheckGuess(std::string); //TODO make a more rich return value.
	//create new data type, input number of bulls and cows
	


private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;



};
