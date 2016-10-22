//Jesus Vagas
//

#ifndef  FACULTY_h
#define  FACULTY_h


#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "Education.h"
#include "Constant.h"
class Faculty :public Employee, public Constant
{

protected:
	string level;
	Education education ;
	 Constant::FACULTY_MONTHLY_SALARY;

public:

	Faculty(string lN, string fN, string i, char s, Date b, string l, Education e);
	Faculty();
	string getLevel();
	void putData();

 double monthlyEarnings();
};

#endif;