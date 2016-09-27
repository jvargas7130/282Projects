#include <iostream>
#include <iomanip>
#include "Employee.h"
#include<string>
using namespace std;


void Employee::putData() {
	cout << "ID Employee number :_________" << Idnumber <<  endl;
	cout << "Employee name: __________ " << firstName <<" "<< lastName<< endl;

	cout << "Birth date: _______ " << birthDate << endl;
}

