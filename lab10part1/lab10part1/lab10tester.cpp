//Jesus Vargas
//CECS 282 LAB #10
#include<iostream>
#include<iomanip>
#include<list>
#include<String>

using namespace std;



int main()
{
	string choice = "y";

	int num;
	list<int> ilist;
	list <int>::iterator itr1;
	list <int>::iterator itr2;
	


	while (choice == "y") {
		cout << "Enter Interger: ";
		cin >>num;
		ilist.push_back(num);

		cout << "Contiue entering y/n" << endl;
		cin >> choice;

	}
 //display the list
	for (itr1 = ilist.begin(); itr1 != ilist.end(); itr1++)
		cout << *itr1 << ' ';   
	cout << endl;




	itr1 = ilist.begin();
	itr2 = ilist.end();


	
	itr2--;






	for (int i = 0; i < (ilist.size()/2); i++)
	{

		swap(*itr1, *itr2);

		itr1++;
		itr2--;
	}




	//display the list
	for (itr1 = ilist.begin(); itr1 != ilist.end(); itr1++)
		cout << *itr1 << ' ';
	cout << endl;




	system("pause");
	return 0;
}