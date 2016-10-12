

#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "Education.h"
#include "Constant.h"
class Faculty :public Employee
{

protected:
	string level;
	Education education;
	double Constant::FACULTY_MONTHLY_SALARY;

public:

	Faculty(string lN, string fN, string i, char s, Date b, string l, Education e) : Employee(lN, fN, i, s, b){

		level = l;
		education = e;

	}

	string getLevel();
	void putData();

 double monthlyEarnings();
};