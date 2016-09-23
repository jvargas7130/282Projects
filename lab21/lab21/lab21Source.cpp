//Jesus Vargas
//CECS 282 LAB #21

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int counter = 1;
	int counter2 = 1;
	int counter3 = 1;
	int sum = 0;

	while (counter3 <= 4) {

		while (counter2 <= counter / 2) {

			if (counter%counter2 == 0) {

				sum = sum + counter2;

			}

			counter2++;
		}



		if (sum == counter) {
			counter3++;
			cout << counter << endl;
		}

		counter++;
		sum = 0;
		counter2 = 1;
	}

	system("pause");
	return 0;
}

