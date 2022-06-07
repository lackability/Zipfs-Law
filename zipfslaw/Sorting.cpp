#include "Sorting.h"


bool Sorting::fileFind()
{
	std::cin >> this->filename;
	std::ifstream in_file("textsrc/" + this->filename);

	//logic statement to check if file exists within "folder" textsrc/
	bool found = false;
	if (in_file.fail()) {

		std::cout << "error: file unable to open.\ntry again?" << std::endl;
		while (!found) {

			std::cin >> this->filename;
			std::ifstream in_file("textsrc/" + this->filename);
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


std::vector<char> Sorting::intialDisplay()
{
	//input file
	std::fstream in_file;
	in_file.open("textsrc/" + this->filename);

	std::vector<char> converted = std::vector<char>((std::istreambuf_iterator<char>(in_file)), std::istreambuf_iterator<char>());
	//redisplays the text 

	for (char i : converted) {
		std::cout << i;
	}

	return converted;
};


std::string Sorting::inputToMap(std::map<std::string, size_t>& wordCount)
{
	/*creating a hashmap*/
	for (int i = 0; i < text.size(); i++) {
		using map = std::map<class Key, class T>;
	}

	return std::string();
}






std::string Sorting::getFilename()
{
	return filename;
}

void Sorting::setFilename(std::string Nfilename)
{
	filename = Nfilename;
}




