#include <iostream>
#include <string>

std::string getStartWord() {
	std::string StartWords[5] = {
		"test",
		"foo",
		"bar",
		"home",
		"queer",
		"あなべる"
	};

	int arrayLen = 5;
	return StartWords[ std::rand() % arrayLen]; //you might want to change this code to somethign else
}

int getStringLength(std::string inputString) {
	
}

int main() {
}
