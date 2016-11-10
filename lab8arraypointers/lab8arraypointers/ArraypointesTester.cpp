#include <iomanip>
#include <iostream>
#include "Person.h"

using namespace std;





void bsort(Person **p, int n, bool s);
void order(Person **p1, Person **p2, bool s);



int main()
{
	Person * perptr[100];
	int n = 0;
	char choice;


	//input persons

	do 
	{
		perptr[n] = new Person();
		perptr[n]->setPerson();
		n++;
		cout << "Enter y/n " << endl;
		cin >> choice;

	} while (choice == 'y');



	//display unsorted person objects
	for (int i = 0; i < n; i++)
	{
		cout << perptr[i]->getName() << endl;
			
	}


	cout << "" << endl;
	//sort by pointer if true
	bsort(perptr, n, true);

	//display sorted person objects
	for (int i = 0; i < n; i++)
	{
		cout << perptr[i]->getName() << endl;
	}


	cout << "" << endl;
	//display by pointer if false
	bsort(perptr, n, false);

	//display sorted person objects
	for (int i = 0; i < n; i++)
	{
		cout << perptr[i]->getName() << endl;
	}


	system ("pause");
	return 0;
}//end main

void bsort(Person **p, int n, bool s)
{



	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k<n; k++)
		{
			order(&p[j], &p[k],s);

		}
	}

}

void order(Person **p1, Person **p2, bool s)
{

	if (s == true) {
		if ((*p1)->getName().compare((*p2)->getName()) > 0)
			{
				Person *temp = *p1;
				*p1 = *p2;
				*p2 = temp;
			}
	
	}
	else if (s == false) {
		if ((*p1)->getSalary() < ((*p2)->getSalary()))
			{
				Person *temp = *p1;
				*p1 = *p2;
				*p2 = temp;
			}
		}
	

	
}
		

