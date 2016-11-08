#include <iomanip>
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person * perptr[100];
	int n = 0;
	char choice;


	//input persons

	do 
	{
		perptr[n] = new Person();
		perptr[n]->getName();
		n++;
		cout << "Enter y/n " << endl;
		cin >> choice;

	} while (choice == 'y');











	return 0;
}