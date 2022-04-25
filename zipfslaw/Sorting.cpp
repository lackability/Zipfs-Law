﻿#include "Sorting.h"

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

	//logic statement to check if file exists within "folder" textsrc/
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


std::vector<char> Sorting::intialDisplay(std::string filename)
{
	//input file
	std::fstream in_file;
	in_file.open("textsrc/" + filename);

	std::vector<char> converted = std::vector<char>((std::istreambuf_iterator<char>(in_file)), std::istreambuf_iterator<char>());
	//redisplays the text 
	for (char i : converted) {
		std::cout << i;
	}

	return converted;
};


std::string Sorting::counting(std::vector<char> text)
{
	//creating a hashmap
	std::map<char, std::vector<char>> charmap;

	for (int i = 0; i < text.size(); i++) {

		//how to move over this, input the contents of a vector, and convert it into key maps such as "a: 50"
		charmap << text; 
	}

	return std::string();
};



