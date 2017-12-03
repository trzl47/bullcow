#include <iostream>
#include <string>

using namespace std;

int getChallenge(); // get user Challenge
bool checkChallenge(string); //validate Challenge input
void PrintIntro(); // introduce the game
string getGuess(); // get user input
bool checkGuess(string); // validate user input


//entry point for application
int main() {
	PrintIntro();
	getChallenge();

	constexpr int player_turns = 5;
	for (int i = 1; i <= 5; i++) {
		getGuess();
		cout << endl;
	}
}

// introduce the game
void PrintIntro() {
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl
		<< "Can you guess the " << WORLD_LENGTH << " Letter isogram I am thinking of?" << endl;
	return;
}

// get a guess from the player
string getGuess() {
	string Guess = "Enter your answer:";
	getline(cin, Guess);
	return Guess;
}


int getChallenge() {
	// display prompt
	cout << "Choose your Challenge" << endl
		<< "1 - 3asy" << endl
		<< "2 - Medium" << endl
		<< "1 - Hard" << endl;

	//user Challenge selection
	string Challenge = "";
	getline(cin, Challenge);

	//input validation
	checkChallenge(Challenge);
}

// validate user input for Challenge
bool checkChallenge(string) {
	bool validChallenge = false;
	//check user entered number
	//check number entered is one of choices
	return validChallenge;
}

// validate user input for answer
bool checkGuess() {
	bool validAnswer = false;
	return validAnswer;
}