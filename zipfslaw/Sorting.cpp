#include <iostream>
#include <fstream>
#include "Sorting.h"

bool Sorting::fileFind()
{
	std::string filename;
	std::cout << "Enter File Name: " << std::endl;
	std::cin >> filename;
	std::ifstream in_file("textsrc/" + filename);

	bool found = false;
	if (in_file.fail() == true) {
		std::cout << "error: file unable to open.\ntry again?" << std::endl;
		while (found == false) {
			std::cin >> filename;
			std::ifstream in_file("textsrc/" + filename);
			if (in_file.fail() == true) {
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
	std::vector<std::string>;
	std::string words;

	//use a for or while loop to test for words and limits in such text file.
	/*if (in_file.is_open() == true) {
		std::getline(in_file, "the");
	}*/
	return words;
}


std::string Sorting::counting()
{

	return std::string();
}
;



