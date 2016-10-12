#include <iostream>
#include <iomanip>
#include<string>
#include "Faculty.h"
#include "Employee.h"
#include "Constant.h"

using namespace std;

double Faculty::monthlyEarnings() {


	
	if (level.compare("AS") == 0 ) {
		return FACULTY_MONTHLY_SALARY;
	}
	else if (level.compare("AS") == 0) {
		return 1.2 * FACULTY_MONTHLY_SALARY;
	}
	else if (level.compare("AS") == 0) {
		return 1.4 * FACULTY_MONTHLY_SALARY;
	}
}


string Faculty::getLevel() {
	return level;
}

void Faculty::putData()
{
	Employee::putData();
	
//XXXXX Professor where  XXXXX can be Assistant, Associate or Full 
	cout << "Monthly Salary" << monthlyEarnings() << endl;
}

Faculty::Faculty(string lN, string fN, string i, char s, Date b, string l, Education e):Employee(lN, fN, i, s, b)
{


}