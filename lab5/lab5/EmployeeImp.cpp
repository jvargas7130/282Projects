#include <iostream>
#include <iomanip>
#include<string>
#include "Employee.h"
using namespace std;


void Employee::putData() {
	cout << "ID Employee number :_________" << idNumber << endl;
	cout << "Employee name: __________ " << firstName << " " << lastName << endl;
	cout << "Birth date: _______ " << birthDate << endl;
}

string Employee::getfirstName() const {
	return firstName;
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

