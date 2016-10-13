#include <iostream>
#include <iomanip>
#include<string>
#include "PartTime.h"

using namespace std;


//PartTime(string lN, string fN, string i, char s, Date b,double h, int hr);

PartTime::PartTime(string lN, string fN, string i, char s, Date b, double h, int hr):Staff(lN, fN, i, s, b, h)
{
	hours = hr;
}

PartTime::PartTime() {

}
int PartTime::getHours() {
	return hours;
}
void PartTime::setHours(int h) {
	hours = h;
}
double PartTime::monthlyEarnings() {
	return hours * hourlyRate* 4 ;
}


void PartTime::putData() {
	Employee::putData();

	cout << "Monthly Salary: $" << monthlyEarnings() << endl;
	cout << "Hourly rate: $" << hourlyRate << endl;
	cout << "Hours Worked per week: " << hours << endl;
	cout << "Hours Worked per Month: " << hours * 4 << endl;

}