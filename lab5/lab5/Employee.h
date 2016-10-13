#ifndef  EMPLOYEE_h
#define  EMPLOYEE_h


#include <iostream>
#include <iomanip>
#include "Date.h"
#include "Constant.h"

using namespace std;


class Employee
{

protected:
	string lastName = "";
	string firstName = "";
	string idNumber = "";
	char sex =  ' ';
	Date birthDate;
	

public:
	Employee(string lN, string fN, string iD, char s, Date b);
	
	Employee();

	string getlastName() const;
	string getfirstName() const;
	string getidNumber() const;
	char getSex() const;
	Date getbDate();

	void putlastName(string lastName);
	void putfirstName(string firstName);
	void putIdnumber(string Idnumber);
	void putSex(char sex);

	virtual void putData();
	virtual double monthlyEarnings() = 0;

};


#endif;