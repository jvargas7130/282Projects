#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;


class Employee:public Date
{

protected:
	string lastName = "";
	string firstName = "";
	string idNumber = "";
	char sex =  ' ';
	Date birthDate;
	

public:
	Employee(string lN, string fN, string i, char s,Date b) {
		lastName = lN;
		firstName = fN;
		idNumber = i;
		sex = s;
		birthDate = b;
	}
	Employee();



	string getlastName() const;
	string getfirstName() const;
	string getidNumber() const;
	char getSex() const;
	int getbDate() const;

	void putlastName(string lastName);
	void putfirstName(string firstName);
	void putIdnumber(string Idnumber);
	void putSex(char sex);

	virtual void putData();
	 double monthlyEarnings();





};


