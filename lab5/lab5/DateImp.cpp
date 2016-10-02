#include <iomanip>
#include <iostream>
#include "Date.h"
#include<string>
using namespace std;


int Date::getDay() {
	return day;
}
int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}
void Date::showDate() const {
	cout << "Month" << month << "Day" << day << "Year" << year << endl;
}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
