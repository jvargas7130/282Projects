//Jesus Vargas
//CECS Lab 7
#include <iostream>
#include <iomanip>
#include<string>
#include "Polar.h"
#include "Safearray.h"
using namespace std;



int main()
{
	Polar p1(10.0, 0.0); //line to the right
	Polar p2(10.0, 1.570796325); //line straight up
	Polar p3; //uninitialized Polar
	p3 = p1 + p2; //add two Polars
	cout << "\np1="; p1.display(); //display all Polars
	cout << "\np2="; p2.display();
	cout << "\np3="; p3.display();
	cout << endl;


	//***************************
	//array
	int a[] = { 12,4,7,8,15 };
	Safearray  as(a);

	as[2] = 10;
	as.print();

	as[6] = 5;
	as.print();
	

		

	system("pause");
	return 0;
}
