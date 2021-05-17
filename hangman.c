#include <iostream>
#include <string>

std::string getStartWord() {
	std::string StartWords[5] = {
		"test",
		"foo",
		"bar",
		"home",
		"queer",
	};

	int arrayLen = 5;
	return StartWords[ std::rand() % arrayLen]; //you might want to change this code to somethign else
}

int getStringLength(std::string inputString) {
	//TODO: support non-ascii chars (emoji, cjk, arabic, etc.)

	//// these lines dont compile with g++ on debian buster
	//std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> conv;
	//return conv.from_bytes(inputString).size();
	return inputString.length();
}

int main() {
	std::string word = getStartWord();
	std::cout << word << getStringLength(word);
}
