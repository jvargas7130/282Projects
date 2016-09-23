//Jesus Vargas
//CECS 282 LAB #22

#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char ch;
	int n;
	int i = 1;
	int sum = 0;

	do {
		n = 0;
		i = 1;
		sum = 0;
		do {
			cout << "Please Enter Number ";
			cin >> n;
			ch = cin.get();
			if (n < 0 && n != -1) {
				cout << "You entered a wrong number" << endl;
				cout << "\n" << endl;

			}
		} while (n < 1 && n != -1);

		while (i <= n / 2) {

			if (n%i == 0) {
				sum = sum + i;
			}
			i++;
		}

		if (n != -1) {
			if (sum == n) {
				cout << n << " is a perfect number" << endl;

			}
			else {
				cout << n << " is not a perfect number" << endl;
			}
		}
		cout << "\n" << endl;

	


	} while (n != -1);

	
	cout << "You ended program" << endl;
	system("pause");
	return 0;
}
