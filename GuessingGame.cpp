#include <iostream>
#include <stdlib.h>

int main() {
	srand(time(NULL));

	int number = rand() % 100 + 1;
	int guess = 0;

	//debug
	//cout << number << endl;

	do {
		std::cout << "Guess a number between 1 and 100!\n";
		std::cin >> guess;

		if (guess > number)
		{
			std::cout << "Too high!\n";
		}
		else if (guess < number)
		{
			std::cout << "Too low!\n";
		}
	} while (number != guess);

	std::cout << "You win!";

	return 0;
}