/* Brandy Sawyer - 01/08/16
Section 02 - Bull Cow Game from Udemy Course - Creating games with Unreal Engine
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();			//Introduces the game to the User - Function Prototype
void PlayGame(); 
std::string GetGuess();			//Takes the users guess - Function Prototype
bool AsktoPlayAgain();
FBullCowGame BCGame;


int main() 
{
	
	do
	{
		PrintIntro();
		PlayGame();
		//TODO add a game summary
	}
	while (AsktoPlayAgain());

	return 0;
}

void PrintIntro() 
{
//Introduces and challenges the user to the game
	constexpr int WORD_LENGTH = 5;

	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << std::endl;
	std::cout << std::endl;
	return;
}
void PlayGame()
{
	//asking for word guesses based on the number of turns
	BCGame.Reset();
	int MaxTrys = BCGame.GetMaxTries();

	for (int i = 1; i <= MaxTrys; i++)
	{
		std::string UserGuess = GetGuess(); // TODO make loop checking valid guesses

		//submit valid guess to the game
		//print # of bulls and cows


		std::cout << "You Guessed: " << UserGuess << std::endl;
		// TODO summarize the game
	}
	return;
}std::string GetGuess()
{
	//Takes the users guess
	std::string UserGuess = "";

	std::cout << "You have " << BCGame.GetCurrentTry() << " tries remaining." << std::endl;
	std::cout << "Input your guess: ";
	getline(std::cin, UserGuess);
	std::cout << std::endl;

	return UserGuess;
}
bool AsktoPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	std::string Response = "";
	getline(std::cin, Response);

	return (Response[0] == 'y' || Response[0] == 'Y');
	
}
