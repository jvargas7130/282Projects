
#include <iostream>
#include <iomanip>
#include "Staff.h"


class PartTime :public Staff, public Constant
{

protected:
	int  hours;


public:
	PartTime(string lN, string fN, string i, char s, Date b,double h, int hr);
	PartTime();
	int getHours();
	void setHours(int hours);
	 double monthlyEarnings();
	 void putData();
};
