#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>
#include <set>

int main()
{
	std::string line;
	int counter = 0;
	std::ifstream fin("data.txt");
	while (std::getline(fin, line))
	{
		int totalWords = 0;
		std::set<std::string> data;
		std::stringstream ss(line);
		std::string temp;
		while (ss >> temp)
		{
			std::sort(temp.begin(), temp.end());
			data.insert(temp);
			++totalWords;
		}
		if (totalWords == data.size())
			++counter;
	}
	std::cout << counter;
	return 0;
}
