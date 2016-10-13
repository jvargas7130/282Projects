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
void Date::showDate() {
	cout  << month << "/" << day << "/" << year << endl;
}

void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
/*
void Date::operator=(Date &d)
{
	day = d.getDay();
	month = d.getMonth();
	year = d.getYear();



}
*/

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

Date::Date()
{
}
