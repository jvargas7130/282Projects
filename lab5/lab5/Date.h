#ifndef DATE_H
#define DATE_H
class Date {
protected:
	int day;
	int month;
	int year;
public:
	int getDay();
	int getMonth();
	int getYear();
	void showDate() const;
	void setDate(int d, int m, int y);


};

#endif