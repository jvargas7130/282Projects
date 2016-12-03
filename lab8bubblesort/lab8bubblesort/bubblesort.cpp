//Jesus Vargas
//CECS Lab 6
#include <iostream>
#include <iomanip>
#include<string>

using namespace std;


void bubbleSort(int *p, int size, bool(*f)(int, int));



bool asc(int a, int b);
bool dsc(int a, int b);


int main()
{

	int size;

	int *p;

	cout << "Enter Size of array: ";
	cin >> size;
	p = new int[size];

	cout << "Enter array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}


	bubbleSort(p, size, asc);
	cout << "acending: ";
	for (int i = 0; i < size; i++) {
		cout << p[i]<<", ";
	}

	bubbleSort(p, size, dsc);
	cout << " "<<endl;
	cout << "decending: ";
	for (int i = 0; i < size; i++) {
		cout << p[i]<< ", ";
	}
	cout << " " << endl;

	system("pause");
	return 0;
}

bool asc(int a, int b)
{
	return a > b;
}

bool dsc(int a, int b)
{
	return a < b;
}


void bubbleSort(int *p,int size, bool(*f)(int,int))
{
	int temp;
	for (int i = 0; i < size -1; i++) 
	{
		for (int j = 1; j < size -i; j++)

		{
		
			if ((*f)(p[j-1], p[j]) == true)
			{
		
				 temp = p[j-1];
				p[j-1] = p[j];
				p[j] = temp;

			}
		}
	}


}
