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
		for (std::size_t i = 0; i < data.size(); ++i)
		{
			for (std::size_t j = 0; j < data.size(); ++j)
			{
				if (i == j)
					continue;
				if (data[i] % data[j] == 0)
					sum += data[i] / data[j];
			}
		}
	}
	std::cout << sum;
	return 0;
}
