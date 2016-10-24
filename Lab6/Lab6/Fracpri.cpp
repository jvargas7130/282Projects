#include "Fracpri.h"
#include<iostream>
#include<iomanip>
using namespace std;

//a.a zero argument contructor
Fracpri::Fracpri() 
{

}

//b. a three argument constructor
Fracpri::Fracpri(int w, int n, int d) 
{
	whole = w;
	numer = n;
	denom = d;
}

/* c. A getFraction function to input the fracpri object
from the keyboard with the input format: whole-numerator-denominator. */
Fracpri Fracpri::getFraction() 
{
	return whole + numer/denom;
}

/* d. A showFraction function to show the fracpri object with the output format: whole   numerator/denominator.*/
void showFractions() 
{

}

/*. e.  Create a function called addfracts which adds two fracpri objects together.
That is , a member function will add two fracpri objects  given as arguments, and return the sum of them.*/
Fracpri Fracpri::addFracpri(Fracpri f1, Fracpri f2) 
{
	return f1 + f2;
}

// f. Overload the addition, subtraction, multiplication and division for the fracpri class.
//& passing the adrress to the operator

Fracpri Fracpri::operator + (const Fracpri& f)
{


}
Fracpri Fracpri::operator - (const Fracpri& f)
{

}
Fracpri Fracpri::operator * (const Fracpri& f)
{

}
Fracpri Fracpri::operator / (const Fracpri& f)
{

}

/*g. Create  two overloaded arithmetic operators which allows the fracpri class to be able
to add a constant integer value to a fracpri object such as this:
F3 = 5 + F1; or add a fracpri object to a constant integer value as shown below:
F3 = F1 +  5; */

Fracpri operator + (int num, const Fracpri& f)
{
	
}

Fracpri operator + (const Fracpri& f, int num) 
{

}
	//h. Overload the < operator.
bool Fracpri::operator < (const Fracpri& f)
{

}

//h. Overload the < operator.
bool Fracpri::operator < (const Fracpri& f)
{

}

//k.Overload the += operator.
Fracpri operator += (const Fracpri& f, int num)
{

}

//l.Overload the input / output(cin / cout) operators.
 istream operator >> (istream& in, Fracpri f)
{

}
 ostream operator << (ostream& out, Fracpri f)
{

}



/*m.Modify the fracpri class so it can convert a floating point(decimal) number into a fracpri object, and vice versa.That is,
it should figure out that 7.14 is 7  9 / 64, and that 2  7 / 8 is 2.875.
You can assume that the denominator of a fraction never be smaller than 64. The following pseudocode can be used to convert a real number to a fracpri object :
-before the conversion, add the float number to 0.0078125.
- whole is the integer part of the float number.

- float flofrac = float - whole(fraction is what's left.)
- numer = flofrac  * 64.
- denom = 64.
*/

 Fracpri::Fracpri(float f)
 {

}


 Fracpri::operator float() const
 {

 }