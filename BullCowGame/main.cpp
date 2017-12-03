#include <iostream>
#include <string>

using namespace std;

// start the game
void PrintIntro(); // introduce the game

void PlayGame();

// player choose difficulty
void challengePrompt(string); // prompt user for challenge selection
string getChallenge(); // get user Challenge
bool checkChallenge(string); //validate Challenge input

// playing the game
string getGuess(); // get user input
bool checkGuess(string); // validate user input

// play again?
bool PlayAgain(); // ask player exit or play again


//entry point for application
int main() {
	do {
		PrintIntro();
		//getChallenge();
		PlayGame();
	} while ((PlayAgain() == true));

	return 0; // exit application
}

// introduce the game
void PrintIntro() {
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows, a fun word game." << endl
		<< "Can you guess the " << WORLD_LENGTH << " Letter isogram I am thinking of?" << endl;
	return;
}

void challengePrompt(string difficulties[]) {
	#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

	// display prompt
	cout << "Choose your challenge level" << endl;
	cout << difficulties << endl;

	for (int i = 0; i < ARRAY_SIZE(difficulties); i++)
	{
		cout << difficulties[i] << endl;
	};
}

string getChallenge() {
	string difficulties[] = { "easy", "medium", "hard" };

	challengePrompt(difficulties); // display prompt

	//user Challenge selection
	string Challenge = "";
	getline(cin, Challenge);
	cout << "Selected " <<

	//input validation
	checkChallenge(Challenge);

	return Challenge;
}

// validate user input for Challenge
bool checkChallenge(string challenge) {
	bool validChallenge = false;

	return validChallenge;
}

void PlayGame() {
	constexpr int player_turns = 5;
	for (int i = 1; i <= 5; i++) {
		// get a guess from the player
		getGuess();
		cout << endl;
	}
}

string getGuess() {
	string Guess = "";
	cout << "Enter your answer:";
	getline(cin, Guess);
	cout << "You entered " << Guess << endl;
	return Guess;
}

// validate user input for answer
bool checkGuess() {
	bool validAnswer = false;
	return validAnswer;
}

// play again?
bool PlayAgain() {
	cout << "Would you like to play again? (y/n)" << endl;
	string resp = "";
	getline(cin, resp);
	if ((resp[0] == 'y') || (resp[0] == 'Y')) {
		return true;
	}
	else {
		cout << "Thanks for playing!" << endl;
		return false;
	}
}