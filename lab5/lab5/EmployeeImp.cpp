#include <iostream>
#include <iomanip>
#include<string>
#include "Employee.h"




using namespace std;




void Employee::putData() {

	

	cout << "Employee name: " << firstName << " " << lastName << endl;
	cout << "ID Employee number : " << idNumber << endl;
	cout << "Sex: " << sex << endl;
	cout << "Birth date: "<< getbDate().getDay() <<"/"<< getbDate().getMonth()  <<"/"<< getbDate().getYear()<< endl;

}

string Employee::getfirstName() const {
	return firstName;
}

Employee::Employee()
{
}

string Employee::getlastName() const {
	return lastName;
}

string Employee::getidNumber() const {
	return idNumber;
}

void Employee::putfirstName(string f) {
	firstName = f;
}

void Employee::putlastName(string l) {
	firstName = l;
}

void Employee::putIdnumber(string i) {
	idNumber = i;
}

void Employee::putSex(char s) {
	sex = s;
}

char Employee:: getSex() const {
	return sex;
}
	
Date Employee::getbDate() {
	return birthDate;
}

Employee::Employee(string lN, string fN, string iD, char s, Date b) {
	lastName = lN;
	firstName = fN;
	idNumber = iD;
	//sex = s;
	birthDate = b;
	sex = s;
}



