#include <iostream>
#include <vector>
#include "./vector/vector.h"

int main()
{
	Vector<int> v = Vector<int>(5);
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << '\n';
	}
	
	std::vector<int> v2{};

	v2.resize(4);
	v2.push_back(17);

	std::cout << v2[4];

	return 0;
}
