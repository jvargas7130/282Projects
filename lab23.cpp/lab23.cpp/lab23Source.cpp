//Jesus Vargas
//CECS 282 LAB 23

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void displayColumnTitle();
float calculateBalanceDue(float balanceDue, float paymentAmt);
void displayBalance(int month, float balanceDue);

int main() {
	char ch;
	int userAccount;
	string name;
	float balance;


	//only go in here if account is invalid



	do {

		//Checks for invalid input
		

		cout << "Enter Account" << endl;
		cin >> userAccount;
		ch = cin.get();

		if (userAccount != -1) {
			//User enters name
			cout << "Enter Name: ";
			getline(cin, name);

			//user enters balance
			cout << "Enter balance due:" << endl;
			cin >> balance;
			ch = cin.get();

			//calculates balance


			int month = 0;
			float paymentAmt = balance*.1;

			displayColumnTitle();

			//loopthrough and calculates for 10 years

			float balanceDue = balance;
			for (int i = 0; i < 10; i++) {
				month++;
				float balanceReturn = calculateBalanceDue(balanceDue, paymentAmt);

				displayBalance(month, balanceReturn);
				balanceDue = balanceReturn;
			}
			cout << "" << endl;
			cout << "Account Number:" << userAccount << endl;
			cout << "Name:" << name << endl;

			cout << "" << endl;
		}

	} while (userAccount != -1);

	if (userAccount == -1) {
		cout << "Thank you " << endl;
	}





	system("pause");
	return 0;
}


//Display the column titles
	//month year

void displayColumnTitle() {
	cout << "MONTH BALANCE DUE" << endl;
}

float calculateBalanceDue(float balanceDue, float paymentAmt) {
	balanceDue = balanceDue - paymentAmt;
	return balanceDue;
}


//Display the month and the balnce due
void displayBalance(int month, float balanceDue) {
	cout << left << setw(9) << month
		<< right << setw(9) << fixed << setprecision(2) << balanceDue << endl;
}
