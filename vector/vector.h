#pragma once
#include <iostream>

template <typename T>
	class Vector
	{
	public:
		Vector(size_t size = 0)
		:_size(size)
		{
			_elements = new T[size];				
		};

		~Vector(){};

		size_t size()
		{
			return _size;
		}
		
		T operator[](const int i)
		{
			return ((T*)_elements)[i];	
		}

		template <typename X>
		friend std::ostream operator << (std::ostream& os, const Vector<X>& v);
	private:
		void * _elements;
		size_t _size;
	};
/*
template <typename X>
std::ostream operator << (std::ostream& os, const Vector<X> v)
{
	for (size_t i = 0; i < v.size(); i++)	
	{
		os << v[i] << '\n';
	}
	return os;
}
*/
