//Jesus Vargas
//Cecs 282 FInal Lab


#include<iostream>
#include<iomanip>
#include<queue>
#include"BooleanSource.h"
#include "washer.h"
#include"Average.h"

using namespace std;

int main()
{
	int carTime;
	float probability;
	int total_lenght_time;

	queue<int> arrivaltimes; //queue object

	cout << "Seconds to wash car: " << endl;
	cin >> carTime;

	cout << "Probability of customer arrival during a second: " << endl;
	cin >> probability;

	cout << "Total simulation  seconds" << endl;
	cin >> total_lenght_time;

	BooleanSource prob(probability);

	washer wash(carTime);
	Average a;



	for (int i = 0; i < total_lenght_time; i++) {


		//when bool queue is true, current second is stored in queue
		if (prob.query() && arrivaltimes.size() < 100) {
			arrivaltimes.push(i);
		}

		//only go in here if there is a car in carwash (que)
		if (!(arrivaltimes.empty())) {

			wash.one_second();
			if (wash.is_busy()) {

				a.carserved();
				//cout << "carsserved:" << a.getCars() << endl;
				//get the average time

				a.nextCar(i - arrivaltimes.front());

				//delete the first queue now that car is done washing.
				arrivaltimes.pop();


				//resets timer
				wash.start_washing();
			}
		}
	}

	//output
	cout << "" << endl;
	cout << " Seconds to wash car : " << carTime << endl;
	cout << "Probability of customer arrival during a second: " << probability << endl;
	cout << "Total simulation  seconds: " << total_lenght_time << endl;
	cout << "Costumer Served: " << a.getCars() << endl;
	cout << "Average Wait: " << a.getAverageTotaltime() << endl;
	system("pause");
	return 0;
}




