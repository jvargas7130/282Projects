#ifndef  EDUCATION_h
#define  EDUCATION_h

#include<iomanip>
#include<iostream>
#include"Employee.h"

//education class implementation
class Education {
protected:
	string degree = " ";
	 string major = " ";
	 int research = 0;
public:
	Education(string d, string m, int r ) {
		degree = d;
		major = m;
		research = r;
	}
	Education();
	string getDegree() const;
	string getMajor() const;

	int getResearch() const;

	void setDegree(string degree);
	void setMajor(string major);
	void setResearch(int research);

};
#endif;