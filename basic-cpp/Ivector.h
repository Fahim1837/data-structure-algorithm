#ifndef IVECTOR_H
#define IVECTOR_H

#include <iostream>
#include <initializer_list>

using namespace std;

template <typename T>
class IVector
{
private:
	size_t _size;
	size_t _capacity;
	T *data;

	void resize()
	{
		if (_size >= _capacity)
		{
			_capacity = _size * 2;
			T *newData = new T[_capacity];
			for (size_t i = 0; i < _size; i++)
			{
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
		}
	}

public:
	// Defualt Constructor
	IVector() : _size{0}, _capacity{1}, data{nullptr}
	{
		data = new T[_capacity];
	}

	// Initializer Constructor
	IVector(initializer_list<T> initList) : _size{initList.size()},
											_capacity{initList.size() + 1}, data{nullptr}
	{
		data = new T[_capacity];
		// auto it = initList.begin();
		size_t index = 0;
		for (auto it = initList.begin(); it < initList.end(); it++)
		{
			data[index++] = *it;
		}
	}

	// Default Destructor
	~IVector()
	{
		delete[] data;
		data = nullptr;
		cout << "Destructor Called" << endl;
	}
	void push_back(const T &element)
	{
		if (_size >= _capacity)
		{
			resize();
		}
		data[_size] = element;
		_size++;
	}

	void pop_back()
	{
		if (_size == 0)
		{
			cout << "Size is 0. Can't pop back" << endl;
		}

		_size--;
		if (_size < (_capacity / 2))
		{
			_capacity /= 2;
			T *newData = new T[_capacity];
			for (size_t i = 0; i < _size; i++)
			{
				newData[i] = data[i];
			}
			delete[] data;
			data = newData;
		}
	}

	bool empty()
	{
		return (_size == 0) ? true : false;
	}

	int size()
	{
		return (int)_size;
	}

	int capacity()
	{
		return (int)_capacity;
	}

	T front()
	{
		return *data;
	}

	T back()
	{
		return *(data + _size - 1);
	}

	T *begin()
	{
		return data;
	}

	T *end()
	{
		return data + _size - 1;
	}

	void print()
	{
		cout << "[ ";
		for (size_t i = 0; i < _size; i++)
		{
			cout << data[i] << " ";
		}
		cout << "]" << endl;
	}
};

#endif
