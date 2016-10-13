#include <iostream>
#include <iomanip>
#include<string>
#include "Staff.h"
using namespace std;


double Staff::monthlyEarnings()  {
	return  160  * hourlyRate;
}

void Staff::putData() {

	//Employee id, name,bday from employee
	Employee::putData();
	cout << "Full Time" <<endl;
	cout << "Monthly Salary: " << monthlyEarnings() << endl;


}

//PartTime(string lN, string fN, string i, char s, Date b,double h, int hr);
Staff::Staff(string lN, string fN, string i, char s, Date b, double h):Employee(lN, fN, i, s, b) {
	hourlyRate = h;
}

Staff::Staff()
{
}

//staff hourly rate accessor
double Staff::gethourlyRate(){
	return hourlyRate;
}