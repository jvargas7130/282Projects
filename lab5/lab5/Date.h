#ifndef DATE_H
#define DATE_H
class Date {
protected:
	int day;
	int month;
	int year ;
public:
	Date(int d, int m, int y);
	Date();
	int getDay();
	int getMonth();
	int getYear();
	void showDate();
	void setDate(int d, int m, int y);

	//void operator = (Date &d);
};

#endif