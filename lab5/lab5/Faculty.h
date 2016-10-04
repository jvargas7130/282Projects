#pragma once

#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "Education.h"
class Faculty:public Employee
{

protected:
	int level;

	string AS = "assistant professor"; //assistant professor
	string AO = "associate professor"; // associate professor
	string FU = "professor"; // professor

	Education e;


public:
	int getLevel() const;
	string getAS() const;
	string getAO() const;
	string getFU() const;
	virtual void putData();

	virtual double monthlyEarnings() = 0;

};