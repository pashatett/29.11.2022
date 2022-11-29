#pragma once
#include <iostream>
using namespace std;
class Fraction{
	int numerator;
	int denomerator;

public:
	Fraction(int num, int denom):
		numerator{ num }, denomerator{denom} 
	{
		cout << "Constructor " << this << endl;
	}
	Fraction(): Fraction(1,1) {//конструктор делигирования, для того чтобы не писать одно и то же много раз
		cout << "Constructor " << this << endl;
	}
	Fraction(const Fraction& f) ://конструктор копирования
		numerator{ f.numerator }, denomerator{ f.denomerator }
	{
		cout << "Constructor " << this << endl;
	}
	~Fraction() {
		cout << "Destructor " << this << endl;
	}
	void print() {
		cout << numerator << " / " << denomerator << endl;
	}
};

