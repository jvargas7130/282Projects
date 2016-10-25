
#ifndef  FRACPRI_h
#define  FRACPRI_h

#include<iostream>
 using namespace std;

class Fracpri {
protected:
	int whole; //the whole number
	int numer; //the numerator of the fractional part
	int denom; //the denominator of the fractional part

public:
	//a.a zero argument contructor
	Fracpri();

	//b. a three argument constructor
	Fracpri(int whole, int numer, int demon);

	/* c. A getFraction function to input the fracpri object 
	from the keyboard with the input format: whole-numerator-denominator. */
	void getFraction();


	/* d. A showFraction function to show the fracpri object with the output format: whole   numerator/denominator.*/
	void showFractions();



	/*. e.  Create a function called addfracts which adds two fracpri objects together. 
	That is , a member function will add two fracpri objects  given as arguments, and return the sum of them.*/
	Fracpri addFracpri(Fracpri f1, Fracpri f2);

	// f. Overload the addition, subtraction, multiplication and division for the fracpri class.
	Fracpri operator + (const Fracpri& f);//& passing the adrress to the operator
	Fracpri operator - (const Fracpri& f);
	Fracpri operator * (const Fracpri& f);
	Fracpri operator / (const Fracpri& f);



	//void properFraction();

	/*g. Create  two overloaded arithmetic operators which allows the fracpri class to be able 
	to add a constant integer value to a fracpri object such as this:
	F3 = 5 + F1; or add a fracpri object to a constant integer value as shown below:
                                        F3 = F1 +  5; */

	friend Fracpri operator + (int num, const Fracpri& f );
	friend Fracpri operator + (const Fracpri& f, int num);

	//h. Overload the < operator.
	bool operator < (const Fracpri& f);


	//k.Overload the += operator.
	friend Fracpri operator += (const Fracpri& f, int num);


	//l.Overload the input / output(cin / cout) operators.
	friend istream& operator >> (istream& in, Fracpri& f);
	friend ostream& operator << (ostream& out, Fracpri& f);
		


	/*m.Modify the fracpri class so it can convert a floating point(decimal) number into a fracpri object, and vice versa.That is, 
	it should figure out that 7.14 is 7  9 / 64, and that 2  7 / 8 is 2.875.
		You can assume that the denominator of a fraction never be smaller than 64. The following pseudocode can be used to convert a real number to a fracpri object :
	-before the conversion, add the float number to 0.0078125.
		- whole is the integer part of the float number.

		- float flofrac = float - whole(fraction is what's left.)
			- numer = flofrac  * 64.
			- denom = 64.
			*/

	Fracpri(float f);


	operator float() const;



};
#endif