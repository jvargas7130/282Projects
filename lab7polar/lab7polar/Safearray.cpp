#include "Safearray.h"
#include <iostream>
#include <iomanip>
using namespace std;


Safearray::Safearray()
{

}



Safearray::Safearray(int p[5])
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] = p[i];
	}
}	

int & Safearray::operator[](int index)
{
	if (index > 4)
	{
		cout << "Array out of bound" << endl;
		exit(0);
	}
	return arr[index];
}

void Safearray::print()
{
	for (int i = 0; i < 5; i++)
	{
		
		cout << arr[i]<< endl;
	}
	
}