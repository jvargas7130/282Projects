//Jesus Vargas
//CECS Lab 6
#include <iostream>
#include <iomanip>
#include<string>
#include "Fracpri.h"


using namespace std;
int main()
{
	//1.	Create a Fracpri object called R3 using zero-argument constructor 
	Fracpri R3 = Fracpri();
	

	//2.	Input a Fracpri object called R1 using getFraction
	Fracpri R1;
	
	R1.getFraction();

	//3.	Input a Fraction object called R2 using overload cin
	Fracpri R2;

	cin >> R2;

	//4.	Display object R1 using showFraction
	cout << R1;
	//	5.	Display object R2 using overload cout
	cout << R2;

	//	6.	Add object R1 and R2 and store the result in R3.Display R3
    R3 = R1 + R2;

	R3.showFractions();

	//	7.	Perform addition, subtraction, multiplication and division on objects R1 and R2.Store the result in R3.
	R3 = R1 + R2;

	R3 = R1 - R2;


	R3 = R1 * R2;
	
	R3 = R1 / R2;



	/*	8.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 = R1 + 10 */
	R3 = R1 + 10;

	/*	9.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 = 15 + R2 */
	R3 = 15 + R2;

	//10.	Compare R1 and R2.If R1 is less than R2, display a message "R1 is less than R2"; otherwise, display "No".

	/*	11.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 += 10 */
	R3 += 10;

	/*	12.	Perform the arithmetic operation below.Display R3 using overloading cout
		input  a number of type float  
		R3 = num;*/

	/*13.	Perform the arithmetic operation below.Display num
		input  a number of type float
		num = R2
		*/






	system("pause");
	return 0;
}