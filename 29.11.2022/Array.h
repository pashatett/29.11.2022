#pragma once
#include <iostream>
using namespace std;

class Array{
	int* arr;
	int size;
public:
	Array(int s) :
		size{s}, arr{(s>0)?new int[s] : nullptr}
	{
		if (s > 0)
			arr = new int[size];
		else
			arr = nullptr;
	}

	Array() :
		Array(0){}

	void setAdd(int s) {
		if (arr) {
			delete[] arr;
			arr = new int[s];
		}
	}
};

