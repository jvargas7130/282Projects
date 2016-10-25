//Jesus Vargas
//CECS Lab 6
#include <iostream>
#include <iomanip>
#include<string>
#include "Fracpri.h"


using namespace std;
int main()
{
	Fracpri R1(3,1,2);

	Fracpri R2(2,1,3);



	(R1 - R2).showFractions();


	system("pause");
	return 0;
}