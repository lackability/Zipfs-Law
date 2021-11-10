#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		bool fileFind();
		//formatting to remove symbols like -, . , , , ;, ! all that stuff
		std::string reformat(std::string filename);
		std::string counting();
};

