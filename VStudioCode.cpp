// VStudioCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

int main()
{

	std::string inputFromUser;
	bool entry = false;
	double doubldEntry, total = 0;
	auto counter = 0;

	while (!entry) {

		std::cout << "Enter a test score, enter 0 to exit: " << std::endl;;
		std::cin >> inputFromUser;

		doubldEntry = stod(inputFromUser);
		total += doubldEntry;

		entry = doubldEntry == 0;

			if (!entry) {

				++counter;

			}

	}

	std::cout << "Average test score: " << (total / counter);

    
}
