//Jesus Vargas
//CECS Lab 6
#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{

	int size;

	int *p;
	cin >> size;
	p = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}


	bubble sort(asc, size, asc);


	bubblesort













	system("pause");
	return 0;
}


void bubbleSort(int *p,int size, int(*f)(int,int))
{

}
