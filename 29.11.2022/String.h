#pragma once
#include <iostream>
using namespace std;

class String{
	char* str;
public:
	String() {
		str = new char[80];
	}
	String(int size) {
		str = new char[size];
	}
	String(const char* user_str) {
		str = new char[strlen(user_str)];
		strcpy_s(str, strlen(user_str) + 1, user_str);
	}
	void setstr() {
		char* temp = new char[80];
		cin.getline(temp,80);
		strcpy_s(str, 81, temp);
		delete[]temp;
	}
	char* getstr(){
		return str;
	}
};

