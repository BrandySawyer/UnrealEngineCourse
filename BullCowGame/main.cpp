/* Brandy Sawyer - 01/08/16
Section 02 - Bull Cow Game from Udemy Course - Creating games with Unreal Engine


*/

#include <iostream>
#include <string>
using namespace std;

void PrintIntro();			//Introduces the game to the User - Function Prototype
string GetGuess();			//Takes the users guess - Function Prototype
void PrintGuess();


int main() 
{

	PrintIntro();

	//asking for word guesses based on the number of turns
	constexpr int NBR_TURNS = 5;
	for (int i = 1; i <= NBR_TURNS; i++)
	{
		GetGuess();
	}
	return 0;
}
void PrintIntro() 
{
//Introduces and challenges the user to the game
	constexpr int WORD_LENGTH = 5;

	cout << "Welcome to Bulls and Cows, a fun word game." << endl;
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
	cout << endl;
	return;
}
string GetGuess() 
{
//Takes the users guess
	string UserGuess = "";

	cout << "Input your guess: ";
	getline(cin, UserGuess);
	cout << endl;

	return UserGuess;
}
void PrintGuess() 
{
	//Takes the users guess
	string UserGuess = "";

	cout << "You Guessed: " << UserGuess << endl;
	return;
}