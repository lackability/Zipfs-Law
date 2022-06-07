#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <SFML/Graphics.hpp>

class Sorting
{
	private:
		std::string filename;

	public:
		bool fileFind();


		std::vector<char> intialDisplay();
		std::string counting(std::vector<char> text);

		std::string getFilename();
		void setFilename(std::string Nfilename);

		
	
};