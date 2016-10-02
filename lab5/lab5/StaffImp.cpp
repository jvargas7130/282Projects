#include <iostream>
#include <iomanip>
#include<string>
#include "Staff.h"


void Staff::putData() {

	//Employee id, name,bday from employee
	Employee::putData();
	cout << "Full Time" << endl;
	cout << "Monthly Salary" << monthlyEarnings << endl;

}

//staff hourly rate accessor
int Staff::gethourlyRate() const {
	return hourlyRate;
}