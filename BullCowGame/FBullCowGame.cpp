#include "FBullCowGame.h"

FBullCowGame::FBullCowGame(){ Reset(); } //constructor
int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::GameWon() const
{
	return false;
}
void FBullCowGame::Reset()
{
	//constructor
	constexpr int MAX_ATTEMPTS = 8;
	int MyCurrentTry = 1;
	int MyMaxTries = MAX_ATTEMPTS;
	return;
}
bool FBullCowGame::CheckGuess(std::string)
{
	return false;
}
