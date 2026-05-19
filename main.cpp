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
	

	std::cout << "Implementation: " << '\n';
	for (size_t i = 0; i < v.size(); i++)
	{
		v[i] = i;
	}

	std::cout << "Actual: " << '\n';
	for (size_t i = 0; i < v2.size(); i++)
	{
		v2[i] = i;
	}

	return 0;
}
