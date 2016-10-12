#include <iostream>
#include <iomanip>
#include "Staff.h"

class PartTime :public Staff
{

protected:
	int  hours;


public:
	int getHours();
	void setHours(int hours);
	virtual double monthlyEarnings() = 0;
	 void putData();
};
