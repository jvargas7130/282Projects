#include "Person.h"
#include <iostream>
#include <string>


using namespace std;

void Person::setPerson()
{
	cout << "Name: ";
	cin >> name;
	cout << "salary: ";
	cin >> salary;
}

string Person::getName()
{

	return name;
}

float Person::getSalary()
{
	return salary;
}



