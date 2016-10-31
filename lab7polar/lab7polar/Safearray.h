#pragma once
#include <iostream>
#include <iomanip>
#include<string>


class Safearray
{
protected:
	int upperbound;
	int lowerbound;


public:
	Safearray();
	Safearray(int upperbound, int lowerbound);



};