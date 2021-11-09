#include <iostream>
#include <fstream>
#include "Sorting.h"

std::string Sorting::fileFind(std::string filename)
{
	std::ifstream in_file("textsrc/" + filename);
	if (in_file.fail()) {
		std::cout << "error: file unable to open." << std::endl;
	}
	else {
		std::cout << "success: file found." << std::endl;
	}
	return filename;
};

std::string Sorting::reformatCounting(std::string fileFind(std::string filename))
{
	//error here, figure out how to use child/parent function keywords
	//maybe using the keyword of "this"?
	std::cin >> filename;

	std::string words;

	while (in_file >> words)
	{
		std::cout << "word: '" 
				  << words 
				  << "' has " 
				  << words.length() 
				  << " characters." 
				  << std::endl;
	}
	return words;
}

