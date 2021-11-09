#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		std::string fileFind(std::string filename);

		//formatting to remove symbols like -, . , , , ;, ! all that stuff
		std::string reformatCounting(std::string fileFind(std::string filename));
		//change to an output file? return ints / vector

};

