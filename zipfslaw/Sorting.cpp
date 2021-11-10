#include <iostream>
#include <fstream>
#include "Sorting.h"

std::string Sorting::fileRequest()
{
	std::string filename;
	std::cout << "Enter File Name: " << std::endl;
	return filename;
};


bool Sorting::fileFind(std::string filename)
{
	std::cin >> filename;
	std::ifstream in_file("textsrc/" + filename);

	bool found = false;
	if (in_file.fail()) {
		std::cout << "error: file unable to open.\ntry again?" << std::endl;
		while (!found) {
			std::cin >> filename;
			std::ifstream in_file("textsrc/" + filename);
			if (in_file.fail()) {
				std::cout << "try again?" << std::endl;
			}
			else {
				std::cout << "success: file found." << std::endl;
				break;
			}
		}
	}
	return true;
};


std::string Sorting::reformat(std::string filename)
{
	std::ifstream in_file("textsrc/" + filename);
	std::vector<std::string> wordList;
	std::string words;
	char x = in_file.get();

	if(!in_file.eof()) {
		while (in_file >> words) {
			words = words + x;
			x = in_file.get();
		}
		std::cout << words << std::endl;
		words.clear();
	} 
	return words;
}


std::string Sorting::counting()
{

	return std::string();
};



