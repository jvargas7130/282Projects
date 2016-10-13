#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <iomanip>
#include "Employee.h"


class Staff: public Employee 
{
protected:
	double hourlyRate;

public:
	Staff(string lN, string fN, string i, char s, Date b, double hourlyRate);
	Staff();
	double gethourlyRate();
	  void putData();

	
	double monthlyEarnings();

};

#endif;