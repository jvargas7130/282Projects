#include <iostream>
#include <iomanip>

class Staff: public Employee
{
protected:
	int hourlyRate;

public:
	Staff(int hourlyRate = 0);
	int gethourlyRate() const;
	void putData();

	


};

