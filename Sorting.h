#pragma once

#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		//formatting to remove symbols like -, . , , , ;, ! all that stuff
		void reformat(std::ifstream file);
		//change to an output file? return ints / vector
		void counting(std::ifstream file);
};

