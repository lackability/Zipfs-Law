#include <iostream>
#include <fstream>
#include "Sorting.h"

bool Sorting::fileFind(std::string filename)
{
	std::ifstream in_file("textsrc/" + filename);
	if (in_file.fail()) {
		return false;
	}
	else {
		return true;
	}
	return true;
};

std::string Sorting::reformat()
{

	std::cout << "Enter File Name: " << std::endl;
	std::string filename;
	std::cin >> filename;

	if (fileFind(filename) == true) {
		std::cout << "success: file found." << std::endl;
	}
	else {
		std::cout << "error: file unable to open." << std::endl;
	}


	std::string words;

	return words;

	//use a for or while loop to test for words and limits in such text file.
	//while (filename >> words)
	//{
	//	std::cout << "word: '"
	//		<< words
	//		<< "' has "
	//		<< words.length()
	//		<< " characters."
	//		<< std::endl;
	//}
	//return words;
};

