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
	Fracpri R3;
	

	//2.	Input a Fracpri object called R1 using getFraction
	Fracpri R1;
	
	R1.getFraction();



	//3.	Input a Fraction object called R2 using overload cin
	Fracpri R2;

	cin >> R2;

	//4.	Display object R1 using showFraction

	R1.showFractions();
	//	5.	Display object R2 using overload cout
	cout << R2;

	//	6.	Add object R1 and R2 and store the result in R3.Display R3
	cout << "Addition"<<endl;
    R3 = R1 + R2;

	R3.showFractions();

	//	7.	Perform addition, subtraction, multiplication and division on objects R1 and R2.Store the result in R3.

	cout << "subtraction" << endl;
	R3 = R1 - R2;

	R3.showFractions();

	cout << "Multiplication" << endl;

	R3 = R1 * R2;

	R3.showFractions();

	cout << "Division" << endl;

	R3 = R1 / R2;

	R3.showFractions();


	/*	8.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 = R1 + 10 */
	cout << "Addition  R1 + 10" << endl;
	R3 = R1 + 10;
	R3.showFractions();
	/*	9.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 = 15 + R2 */
	cout << "addition  15 + R2" << endl;

	R3 = 15 + R2;
	R3.showFractions();
	//10.	Compare R1 and R2.If R1 is less than R2, display a message "R1 is less than R2"; otherwise, display "No".

	if (R1 < R2) {
		cout << "R1 is less than R2" << endl;
	}
	else {
		cout << "No" << endl;
	}
	
	/*	11.	Perform the arithmetic operation below.Display R3 using overloading cout
		R3 += 10 */

	cout << "Increment by 10" << endl;
	R3 += 10;
	cout << R3;
	cout << R3;



	/*	12.	Perform the arithmetic operation below.Display R3 using overloading cout
		input  a number of type float  
		R3 = num;*/
	

	cout << "Enter Float" << endl;
	float num = 0;
	cin >> num;
		R3 = num;
		R3.showFractions();


	/*13.	Perform the arithmetic operation below.Display num
		input  a number of type float
		num = R2
		*/

	cout << "num = R2" << endl;

	num = R2;
	cout << num << endl;

	system("pause");
	return 0;
}