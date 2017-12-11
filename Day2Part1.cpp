#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>

int main()
{
	std::string line;
	int sum = 0;
	std::ifstream fin("data.txt");
	while (std::getline(fin, line))
	{
		std::vector<int> data;
		std::stringstream ss(line);
		int temp;
		while (ss >> temp)
			data.push_back(temp);
		auto pair = std::minmax_element(data.begin(), data.end());
		sum += *(pair.second) - *(pair.first);
	}
	std::cout << sum;
	return 0;
}
