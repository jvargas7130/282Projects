#include <iostream>
#include <iomanip>
#include<string>
#include "Faculty.h"
#include "Employee.h"
#include "Constant.h"
#include "Education.h"
#pragma once

using namespace std;

double Faculty::monthlyEarnings() {


	
	if (level.compare("AS") == 0 ) {
		return  FACULTY_MONTHLY_SALARY;
	}
	else if (level.compare("AO") == 0) {
		return 1.2 * FACULTY_MONTHLY_SALARY;
	}
	else if (level.compare("FU") == 0) {
		return 1.4 * FACULTY_MONTHLY_SALARY;
	}
	return 1;
}


string Faculty::getLevel() {
	return level;
}

void Faculty::putData()
{
	Employee::putData();


	if (level.compare("AS") == 0) {
		cout << "Level: Assistant professor " << endl;
	}
	else if (level.compare("AO") == 0) {
		cout << "Level: Associate Professor " << endl;
	}
	else if (level.compare("FU") == 0) {
		cout << "Level: FullTime"<< endl;
	}


	cout << "Degree: " << education.getDegree() << endl;
	cout << "Major: " << education.getMajor() << endl;
	cout << "Research: " << education.getResearch()<< endl;
	cout << "Monthly Salary: $" << monthlyEarnings() << endl;
}


Faculty::Faculty(string lN, string fN, string i, char s, Date b, string l, Education e):Employee(lN, fN, i, s, b) {

	level = l;
	education = e;

}

Faculty::Faculty()
{
}
