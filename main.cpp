#include <iostream>
#include <vector>
#include "./vector/vector.h"

int main()
{
	Vector<int> v = Vector<int>();
	
	std::vector<int> v2{};

	v2.resize(4);
	v2.push_back(17);

	v.resize(4);
	v.push_back(17);
	
	int currSize = v.size();
	for (size_t i = 0; i < v.size() - 1; i++)
	{
		v.at(i) = i * 2;
	}


	for (size_t i = 0; i < v2.size() - 1; i++)
	{
		v2.at(i) = i * 2;
	}

	return 0;
}
