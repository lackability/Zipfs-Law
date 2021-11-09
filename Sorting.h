#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include <SFML/Graphics.hpp>

class Sorting
{
	public:
		bool fileFind(std::string filename);
		//formatting to remove symbols like -, . , , , ;, ! all that stuff
		std::string reformat();
		//reformat should return a file

		std::string counting();

};

