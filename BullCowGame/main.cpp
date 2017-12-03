#include <iostream>
#include <string>

// start the game
void PrintIntro(); // introduce the game

void PlayGame();

// player choose difficulty
void challengePrompt(std::string); // prompt user for challenge selection
std::string getChallenge(); // get user Challenge
bool checkChallenge(std::string); //validate Challenge input

// playing the game
std::string getGuess(); // get user input
bool checkGuess(std::string); // validate user input

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
	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl
		<< "Can you guess the " << WORLD_LENGTH << " Letter isogram I am thinking of?" << std::endl;
	return;
}

void challengePrompt(std::string difficulties[]) {
	#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))

	// display prompt
	std::cout << "Choose your challenge level" << std::endl;
	std::cout << difficulties << std::endl;

	for (int i = 0; i < ARRAY_SIZE(difficulties); i++)
	{
		std::cout << difficulties[i] << std::endl;
	};
}

std::string getChallenge() {
	std::string difficulties[] = { "easy", "medium", "hard" };

	challengePrompt(difficulties); // display prompt

	//user Challenge selection
	std::string Challenge = "";
	getline(std::cin, Challenge);
	std::cout << "Selected " <<

	//input validation
	checkChallenge(Challenge);

	return Challenge;
}

// validate user input for Challenge
bool checkChallenge(std::string challenge) {
	bool validChallenge = false;

	return validChallenge;
}

void PlayGame() {
	constexpr int player_turns = 5;
	for (int i = 1; i <= 5; i++) {
		// get a guess from the player
		getGuess();
		std::cout << std::endl;
	}
}

std::string getGuess() {
	std::string Guess = "";
	std::cout << "Enter your answer:";
	getline(std::cin, Guess);
	std::cout << "You entered " << Guess << std::endl;
	return Guess;
}

// validate user input for answer
bool checkGuess() {
	bool validAnswer = false;
	return validAnswer;
}

// play again?
bool PlayAgain() {
	std::cout << "Would you like to play again? (y/n)" << std::endl;
	std::string resp = "";
	getline(std::cin, resp);
	if ((resp[0] == 'y') || (resp[0] == 'Y')) {
		return true;
	}
	else {
		std::cout << "Thanks for playing!" << std::endl;
		return false;
	}
}