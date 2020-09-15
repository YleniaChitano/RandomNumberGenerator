#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	int difficulty;
difficulty:

	std::cout << "Please choose a difficulty level:\n";
	std::cout << "1 = easy(numbers 1 - 5)\n";
	std::cout << "2 = medium(numbers 1 - 10)\n";
	std::cout << "3 = hard(numbers 1 - 30)\n ";
	std::cin >> difficulty;
	srand(std::time(0));
	int number;

	if (difficulty == 1)
	{
		number = (1 + rand() % 5);
		std::cout << number;

	}

	if (difficulty == 2)
	{
		number = (1 + rand() % 10);
		std::cout << number;

	}

	if (difficulty == 3)
	{
		number = (1 + rand() % 30);
		std::cout << number;

	}

	else 
	{
		std::cout << "Sorry, that's not a valid level number.\n";
	}
	return 0;
}