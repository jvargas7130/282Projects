
#ifndef  FRACPRI_h
#define  FRACPRI_h

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
	Fracpri getFraction();


	/* d. A showFraction function to show the fracpri object with the output format: whole   numerator/denominator.*/

	/*. e.  Create a function called addfracts which adds two fracpri objects together. 
	That is , a member function will add two fracpri objects  given as arguments, and return the sum of them.*/

	// f. Overload the addition, subtraction, multiplication and division for the fracpri class.

	/*g. Create  two overloaded arithmetic operators which allows the fracpri class to be able 
	to add a constant integer value to a fracpri object such as this:
	F3 = 5 + F1; or add a fracpri object to a constant integer value as shown below:
                                        F3 = F1 +  5; */


	//
};
#endif