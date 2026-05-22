#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
	class Vector
	{
	public:
		Vector(size_t size = 1)
		:_size(size)
		{
			_elements = new T[size];				
		};

		~Vector()
		{
		};

		constexpr size_t size()
		{
			return _size;
		}

		constexpr void resize(size_t size)
		{
			_size = size;
			_elements = new T[size];	
		}
		
		constexpr void push_back(T element)
		{
			resize(_size + 1);
			((T*)_elements)[_size] = element;	
		}

		constexpr T& at(const int i)
		{
			try
			{
				if (i > _size || i < 0)
				{
					throw std::invalid_argument("Specified index is not within bounds!");	
				}
				return ((T*)_elements)[i];	
			}
			catch(std::invalid_argument& e)
			{
				std::cerr << e.what() << '\n';
				std::terminate();
			}
		}

		T& operator[](const int i)
		{
			return ((T*)_elements)[i];	
		}

		//template <typename X>
		//friend std::ostream operator << (std::ostream& os, const Vector<X>& v);
	private:
		void * _elements;
		size_t _size;
	};

template <typename X>
std::ostream operator << (std::ostream& os, const Vector<X> v)
{
	for (size_t i = 0; i < v.size(); i++)	
	{
		os << v[i] << '\n';
	}
	return os;
}

