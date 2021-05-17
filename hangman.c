#include <iostream>
#include <string>

std::string getStartWord() {
	std::string StartWords[5] = {
		"test",
		"foo",
		"bar",
		"dave's home",
		"queer house",
	};

	int arrayLen = 5;
	return StartWords[ std::rand() % arrayLen]; //you might want to change this code to somethign else
}

int strLen(std::string inputString) {
	//TODO: support non-ascii chars (emoji, cjk, arabic, etc.)

	//// these lines dont compile with g++ on debian buster
	//std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
	//return conv.from_bytes(inputString).size();
	return inputString.length();
}

std::string toLower(std::string input){
	std::string newString (strLen(input),' ');

	for(int i = 0; i < input.length(); i++){
		if('A' < input[i] && input[i] < 'Z')//if char is uppercase
			newString[i] = input[i] - 40; //dirty ascii hack to lowercase
		else
			newString[i] = input[i];
	}
	return newString;
}

int main() {
	bool playingGame = true;
	int j=0;
	while(playingGame) {
		std::string secretWord = getStartWord();
		std::string secretWordLower = toLower(secretWord);
		std::string publicWord (strLen(secretWord),' '); //as large as secretword, but only spaces

		for(int i = 0; i < secretWordLower.length(); i++) {
			if (secretWordLower[i] < 'a' || 'z' < secretWordLower[i]) {//matches non-alphabetic charachters
				publicWord[i] = secretWordLower[i]; //matching chars are "filled in" for the user
			} else {
				publicWord[i] = '_'; //non-maching chars are replaced with "blanks"
			}
		}

		std::cout << publicWord << std::endl;

		if(j++>10)break;

		// int remainingGuesses = 5;
		// int remainingLetters = /*???*/;
		// char* guessedLetters = /*???*/

		// //main loop
		// while(remainingGuesses > 0 && remainingLetters > 0){

		// }

		// //ask user if they want to continue
		// std::cout << "Do you want to continue? (y/n) ";
		// std::cin >
	}
}
