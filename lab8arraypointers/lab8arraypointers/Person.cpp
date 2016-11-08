#include "Person.h"
#include <iostream>


using namespace std;

void Person::setPerson()
{
	cout << "Name:" << endl;
	cin >> name;
}

string Person::getName()
{

	return name;
}

float Person::getSalary()
{
	return salary;
}


void Person::bsort(Person **p, int n, bool s)
{
	for (int j = 0; j < n -1; j++)
	{
		for (int k = j + 1; k<n; k++)
		{
			order(p + j, p + k);
		}
	}

}

void Person::order(Person **p1, Person **p2)
{
	if (*p1->getName() > *p2->getName())
	{
		Person *temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}

}
