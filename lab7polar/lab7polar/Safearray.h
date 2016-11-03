#pragma once
#include <iostream>
#include <iomanip>
#include<string>


class Safearray
{
protected:
	int arr[5];


public:
	Safearray();
	Safearray(int p[5]);

	int &operator[](int);

	void print();
	


};