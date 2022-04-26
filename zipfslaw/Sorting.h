#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		bool fileFind(std::map<std::string, size_t>& wordCount);
		std::vector<char> intialDisplay(std::string filename);
		std::string inputToMap(std::map<std::string, size_t>& wordCount);
};