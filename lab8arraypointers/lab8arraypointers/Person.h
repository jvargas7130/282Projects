#pragma once

#include<string>

using namespace std;

class Person
{
protected:
	string name;
	float salary;



public:
	void setPerson();
	string getName();
	float getSalary();

	void bsort(Person **, int n, bool s);

	void order(Person **, Person **);






};