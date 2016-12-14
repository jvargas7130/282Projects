//Jesus Vargas
// CECS 282 LAB 10 part 2


// sorts person objects stored by pointer
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;

class person
{
private:
	string lastName;
	string firstName;
	long phoneNumber;
public:
	person() :             // default constructor
		lastName("blank"), firstName("blank"), phoneNumber(0L)
	{  }
	// 3-arg constructor
	person(string lana, string fina, long pho) :
		lastName(lana), firstName(fina), phoneNumber(pho)
	{  }
	friend bool operator<(const person&, const person&);
	friend bool operator==(const person&, const person&);

	void display() const   // display person's data
	{
		cout << endl << lastName << ",\t" << firstName
			<< "\t\tPhone: " << phoneNumber;
	}
	long get_phone() const // return phone number
	{
		return phoneNumber;
	}
}; //end class person
   //--------------------------------------------------------------
   // overloaded < for person class
bool operator<(const person& p1, const person& p2)
{
	if (p1.lastName == p2.lastName)
		return (p1.firstName < p2.firstName) ? true : false;
	return (p1.lastName < p2.lastName) ? true : false;
}
//--------------------------------------------------------------
// overloaded == for person class
bool operator==(const person& p1, const person& p2)
{
	return (p1.lastName == p2.lastName &&
		p1.firstName == p2.firstName) ? true : false;
}
//--------------------------------------------------------------
// function object to compare persons using pointers
class comparePersons
{
public:
	bool operator() (const person* ptrP1,
		const person* ptrP2) const
	{
		return *ptrP1 < *ptrP2;
	}
};
//--------------------------------------------------------------
//function object to display a person, using a pointer
class displayPerson
{
public:
	void operator() (const person* ptrP) const
	{
		ptrP->display();
	}
};
////////////////////////////////////////////////////////////////
int main()
{                          // a vector of ptrs to persons
	multiset<person*,comparePersons> setPtrsPers;
	//make persons
	person* ptrP1 = new person("Wellington", "John", 4157300);
	person* ptrP2 = new person("Deauville", "William", 8435150);
	person* ptrP3 = new person("Wellington", "John", 9207404);
	person* ptrP4 = new person("Bartoski", "Peter", 6946473);
	person* ptrP5 = new person("Fredericks", "Roger", 7049982);
	person* ptrP6 = new person("McDonald", "Stacey", 7764987);

	setPtrsPers.insert(ptrP1);  //put persons in set
	setPtrsPers.insert(ptrP2);
	setPtrsPers.insert(ptrP3);
	setPtrsPers.insert(ptrP4);
	setPtrsPers.insert(ptrP5);
	setPtrsPers.insert(ptrP6);

	for_each(setPtrsPers.begin(),               //display vector 
		setPtrsPers.end(), displayPerson());
	
	return 0;
}  // end main()
