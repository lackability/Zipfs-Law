#include <iostream>
#include <fstream>
#include <string>
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
	//formatting to remove symbols like -, . , , , ;, ! all that stuff, dont care about grammar, ijust pure words

	std::fstream in_file;
	in_file.open("textsrc/" + filename);
	std::string converted = std::string((std::istreambuf_iterator<char>(in_file)), std::istreambuf_iterator<char>());
	for (int i = 0; i < converted.length(); i++) {
		if (converted[i] == '—') {
			converted.erase(i);
		}

	}
	return converted;
};


std::string Sorting::counting()
{
	return std::string();
};



