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
		std::string fileRequest();
		bool fileFind(std::string filename);
		std::vector<char> intialDisplay(std::string filename);
		std::string counting(std::vector<char> text);
};