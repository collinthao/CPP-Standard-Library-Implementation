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

		void resize(size_t size)
		{
			_size = size;
			_elements = new T[size];	
		}
		
		void push_back(T element)
		{
			((T*)_elements)[_size] = element;	
		}
/*
 * TODO: This is the old implementation that allows us to get the element as an rvalue
 * the below one is what we're working on to return the lvalue
		T operator[](const int i)
		{
			return ((T*)_elements)[i];	
		}
*/
		T operator[](const int i)
		{
			return (&_elements);	
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
