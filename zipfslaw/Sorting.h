#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		std::string fileRequest();
		bool fileFind(std::string filename);
		//formatting to remove symbols like -, . , , , ;, ! all that stuff
		std::string reformat(std::string filename);
		std::string counting();
};

