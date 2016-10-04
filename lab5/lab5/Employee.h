#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{

protected:
	string lastName;
	string firstName;
	string idNumber;
	char sex;
	string birthDate;

public:
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
	virtual double monthlyEarnings() = 0;





};


