#include "Sorting.h"



bool Sorting::fileFind(std::map<std::string, size_t>& wordCount)
{
	std::string filename;
	std::cout << "Enter File Name: " << std::endl;
	std::cin >> filename;
	std::ifstream in_file("textsrc/" + filename);

	std::string word;

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
				//reads in each word from the file
				in_file.open("textsrc/" + filename);
				while (in_file >> word)
				{
					wordCount[word]++;
				}
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


std::string Sorting::inputToMap(std::map<std::string, size_t>& wordCount)
{
	//creating a hashmap
	for (auto itor = wordCount.begin(); itor != wordCount.end(); itor++)
	{
		std::cout << itor->first << " : " << itor->second << std::endl;
	}

	return std::string();
};



