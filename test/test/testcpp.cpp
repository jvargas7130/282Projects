#include<iomanip>
#include<iostream>

using namespace std;



void test(int);
void main()
{
	int x = 5;
	test(x);
	cout << x << endl;



	system("pause");
}
void test(int y)
{
	y = y + 10; //y = 5 + 10 = 15
	cout << y << endl;
}