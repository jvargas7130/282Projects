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
void Fracpri::getFraction() 
{
	cout << "Enter whole number" << endl;
	cin >> whole;
	cout << "Enter numerator " << endl;
	cin >> numer;
	cout << "Enter denominator" << endl;
	cin >> denom;

}



/* d. A showFraction function to show the fracpri object with the output format: whole   numerator/denominator.*/
void Fracpri::showFractions() 
{
	
	cout << "fraction:: " << whole << " " << numer << "/" << denom << endl;
}




/*. e.  Create a function called addfracts which adds two fracpri objects together.
That is , a member function will add two fracpri objects  given as arguments, and return the sum of them.*/
Fracpri Fracpri::addFracpri(const Fracpri f1, const Fracpri f2) 
{
	int num1 = f1.whole * f1.denom + f1.numer;
	int num2 = f2.whole * f2.denom + f1.numer;

	int addNum = f2.denom * num1 + f1.denom * num2 ;
	int resultD = f1.denom * f2.denom;


	return  properFraction( addNum, resultD);
	
} 



// f. Overload the addition, subtraction, multiplication and division for the fracpri class.
//& passing the adrress to the operator

Fracpri Fracpri::operator + (const Fracpri& f1)
{
	int num1 =  (f1.whole * f1.denom) + f1.numer;
	int num2 =  (this -> whole *  this -> denom) + this -> numer;

	int addNum = (this -> denom * num1) + ( f1.denom * num2);
	int resultD = f1.denom * this -> denom;

	return properFraction(addNum, resultD);

}


Fracpri Fracpri::operator - (const Fracpri& f)
{
	int num1 = f.whole * f.denom + f.numer;
	int num2 = this -> whole * (this ->denom) + this -> numer;

	int subNum =  f.denom * num1 - this -> denom * num2;
	int resultD = f.denom * this -> denom;


	return  properFraction(subNum, resultD);;
}


Fracpri Fracpri::operator * (const Fracpri& f)
{
	int num1 = f.whole * f.denom + f.numer;
	int num2 = this->whole * (this->denom) + this->numer;

	int prodNum = num1 * num2;
	int resultD = f.denom * this->denom;


	return  properFraction(prodNum, resultD);;
}
Fracpri Fracpri::operator / (const Fracpri& f)
{
	int num1 = f.whole * f.denom + f.numer;
	int num2 = this->whole * this->denom + this->numer;

	int divNum =  f.denom * num2;
	int resultD = num1 * this->denom;


	return  properFraction(divNum, resultD);;
}

/*g. Create  two overloaded arithmetic operators which allows the fracpri class to be able
to add a constant integer value to a fracpri object such as this:
F3 = 5 + F1; or add a fracpri object to a constant integer value as shown below:
F3 = F1 +  5; */





Fracpri operator + ( Fracpri& f,  int num)
{

	return  Fracpri(f.whole + num, f.numer, f.denom);
}

Fracpri operator + ( int num, const Fracpri& f)
{

	return Fracpri(f.whole + num, f.numer, f.denom);
}





//h. Overload the < operator.
bool Fracpri::operator < (const Fracpri& f)
{
	if (this ->whole == f.whole) {
		return (this -> numer * f.denom) < (this -> denom * f.numer);
	}

	return this->whole < f.whole;
}


//k.Overload the += operator.
Fracpri Fracpri::operator += (int num)
{
	Fracpri result;


	this->whole += num;
	result.whole= this->whole;
	result.numer = this->numer;
	result.denom = this->denom;

		return result;
}


//l.Overload the input / output(cin / cout) operators.
istream& operator >> (istream &in, Fracpri &f)
{
	cout << "Enter whole number" << endl;
	in >> f.whole;
	cout << "Enter numerator " << endl;
	in >> f.numer;
	cout << "Enter denominator" << endl;
	in >> f.denom;
	return in;
}

ostream& operator << (ostream& out, Fracpri& f)
{
	cout << "fraction: " << f.whole << " " << f.numer << "/" << f.denom << endl;
	return out;
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

	whole = f;

	float flofrac = f - whole;
		numer = flofrac * 64;
		denom = 64;
}


Fracpri::operator float() const
{
	float num = whole + (numer / (float) denom);
	return num;
}

// Improper fraction to proper fraction
Fracpri Fracpri::properFraction(int numer, int denom) {

	int whole = 0;
	int numerTemp = numer;

	while (numerTemp > denom) {
		whole++;
		numerTemp = numerTemp - denom;
	
	}

	if (numerTemp == denom) {
		whole++;
	}

	return lowestTerms(Fracpri(whole, numer, denom));
}


Fracpri   Fracpri::lowestTerms(Fracpri& f)
{
	int a = 0;
	int b = 0;

	if (f.numer > f.denom)
	{
		a = f.numer;
		b = f.denom;
	}
	else
	{
		a = f.denom;
		b = f.numer;
	}

	

	while (b > 0) {

	int q = a / b;
	int r = a%b;
		a = q*b + r;
		a = b;
		b = r;
	}

   int newN =  f.numer /= a;
	int newD =  f.denom /= a; 

	 return Fracpri(f.whole,newN, newD );
}