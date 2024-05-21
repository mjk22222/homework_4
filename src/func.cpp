#include <iostream>
#include "func.hpp"

namespace mt
{
	void userInput(int& N) {
		std::cout << "Enter N: ";
		std::cin >> N;
	}
}