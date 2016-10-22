//Jesus Vargas
//Lab 5



#include <iostream>
#include <iomanip>
#include<string>
#include "Faculty.h"
#include "Staff.h"
#include "Employee.h"
#include "Education.h"
#include "PartTime.h"

using namespace std;


int  main() {





	Employee *empPtr[9];


	//staff
	Date d1 (2, 23, 59);
	empPtr[0] = new Staff("Allen", "Paita", "123", 'M', d1, 50.00 );

	//empPtr[0]->putData();
	Date d2 (7, 12, 64);
	empPtr[1] = new Staff("Zapata", "Steven", "456", 'M', d2, 35.00);

	Date d3 (6, 2, 70);
	empPtr[2] = new Staff("Rios", "Enrique", "789", 'M', d3, 40.00);


	//faculty
	Date d4  (4,27,62);
	Education e1 = Education("Ph.D", "Engineering", 3);	
	empPtr[3] = new Faculty("Johnson", "Anne", "243", 'F', d4, "FU", e1);

	Date d5 (3, 14, 75);
	Education e2 = Education("Ph.D", "English", 1);
	empPtr[4] = new Faculty("Bouris", "William", "791", 'F', d5, "AO", e2);

	Date d6 (5, 22, 80);
	Education e3 = Education("MS", "Physical Education ", 0);
	empPtr[5] = new Faculty("Andrade", "Christopher", "623", 'F', d6, "AS", e3);

	
	//Parttime
	//PartTime(string lN, string fN, string i, char s, Date b,double h, int hr);
	Date d7 (8, 10, 77);
	PartTime p1("Guzman", "Augusto", "455", 'F', d7, 35.00, 30);
	empPtr[6] = &p1;

	Date d8(9, 15, 87);
	PartTime p2("Depirro", "Martin", "678", 'F', d8, 30.00, 15);
	empPtr[7] = &p2;

	Date d9(11, 24, 88);
	PartTime p3("Aldaco", "Marque", "455", 'F', d9, 20.00, 35);
	empPtr[8] = &p3;

		
		double partTimeTotal = 0;
		double employeeTotal = 0;

	
		//display the data from Faculty, Staff, and Partime 
		for (int j = 0; j < 9; j++) {
			if (typeid(*empPtr[j]) == typeid(PartTime)) {
				//dynamic_cast<PartTime*>(empPtr[j])->putData(); 
				//empPtr[j]->putData(); 
				partTimeTotal += empPtr[j]->monthlyEarnings(); cout << "" << endl;
			
			}
			//output data 
			empPtr[j]->putData();
			cout << "" << endl;
			//calculate the employee salary total
			employeeTotal += empPtr[j]->monthlyEarnings();
		}
		cout << "\nTotal monthly salary for Part Time: $" << partTimeTotal << endl;
		cout << "Total salary for all Employee: $" << employeeTotal << endl; 


	system("pause");
	return 0;
}