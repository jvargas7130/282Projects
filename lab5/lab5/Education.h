#include<iomanip>
#include<iostream>
#include"Employee.h"

//education class implementation
class Education {
protected:
	string degree;
	 string major;
	 int research;
public:
	string getDegree() const;
	string getMajor() const;

	int getResearch() const;

	void setDegree(string degree);
	void setMajor(string major);
	void setResearch(int research);


	 

};
