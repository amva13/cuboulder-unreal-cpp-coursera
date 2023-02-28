// Copyright A.T. Chamillard. All Rights Reserved.

#include <cstdio>
#include <iostream>
#include <string>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 1
 * @return exit status
*/
int main()
{
	// loop while there's more input
	std::string Input;
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		std::printf("H\n");
		std::printf("He\n");
		std::printf("Li\n");
		std::printf("Be\n");
		std::printf("B\n");
		std::printf("C\n");
		std::printf("N\n");
		std::printf("O\n");
		std::printf("F\n");
		std::printf("N\n");
		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
