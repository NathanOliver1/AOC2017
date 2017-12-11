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
	int counter = 0, temp;
	std::ifstream fin("data.txt");
	std::vector<int> list;
	while (fin >> temp)
		list.push_back(temp);

	int pos = 0, size = list.size();
	while (pos < size)
	{
		int& step = list[pos];
		pos += step;
		if (step >= 3)
			--step;
		else
			++step;
		counter++;
	}
	std::cout << counter;
	return 0;
}
