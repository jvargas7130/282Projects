#include <iostream>
#include <iomanip>
#include "Employee.h"
class Staff: public Employee
{
protected:
	int hourlyRate;

public:
	int gethourlyRate() const;
	void putData();

	


};

