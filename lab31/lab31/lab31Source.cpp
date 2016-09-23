//Jesus Vargas
//CECS 282 LAB 31
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>
#include <cmath>

using namespace std; //adds prefixes




void inputRainfall(int rainFall[], int size);
int calculateAverageRainFall(int rainFall[]);
void classifyAndDisplayRainfall(int rainFall[], int months);

int main() {

	const int SIZE = 12;
	int  rainFall[SIZE];

	inputRainfall(rainFall, SIZE);
	classifyAndDisplayRainfall(rainFall, SIZE);


	system("pause");
	return 0;
}




//The function reads the monthly rainfall from the file rainFall.txt and stores them int the array rainFall
void inputRainfall(int rainFall[], int size) {
	//Open the file
	ifstream inputFile;
	inputFile.open("rainfall.txt");
	//Initialize month counter
	int month = 0; //first month
				   //Read the monthly rainfall in the file
	while (month < 12) {
		inputFile >> rainFall[month];
		month++;
	}



}

//Return the average monthly rainfall (rounded to the nearest millimeter)
int calculateAverageRainFall(int rainFall[]) {
	int sum = 0;
	float average = 0;
	for (int i = 0; i < 12; i++) {
		sum = sum + rainFall[i];
	}

	average = (double)sum / 12;
	int avg = round(average);

	return avg;

}

//Display the average monthly rainfall, the month with the highest rainfall, and the month with the lowest rainfall
void classifyAndDisplayRainfall(int rainFall[], int months) {
	int average =  calculateAverageRainFall(rainFall);

	string month = "";
	string month2 = "";
	int count = 0;
	int count2 = 0;
	int below = average - (average*.25);
	int above = average + (average*.20);
	int max = rainFall[0];
	 int min = rainFall[0];

	 for (int i = 0; i < months; i++) {
		
		 if (max < rainFall[i]) {
			 max = rainFall[i];
			count = i;
		 }
		
	 }


	 for (int i = 0; i < months; i++) {

		 if (min > rainFall[i]) {
			 min = rainFall[i];
			 count2 = i;
		 }

	 }
	

	 if (count == 0) {
		 month = "January";
	 }
	 else if (count == 1) {
		 month = "February";
	 }
	 else if (count == 2) {
		 month = "March";
	 }
	 else if (count == 3) {
		 month = "April";
	 }
	 else if (count == 4) {
		 month = "May";
	 }
	 else if (count == 5) {
		 month = "June";
	 }
	 else if (count == 6) {
		 month = "July";
	 }
	 else if (count == 7) {
		 month = "August";
	 }
	 else if (count == 8) {
		 month = "September";
	 }
	 else if (count == 9) {
		 month = "October";
	 }
	 else if (count == 10) {
		 month = "November";
	 }
	 else if (count == 11) {
		 month = "December";
	 }

	 if (count2 == 0) {
		 month2 = "January";
	 }
	 else if (count2 == 1) {
		 month2 = "February";
	 }
	 else if (count2 == 2) {
		 month2 = "March";
	 }
	 else if (count2 == 3) {
		 month2 = "April";
	 }
	 else if (count2 == 4) {
		 month2 = "May";
	 }
	 else if (count2 == 5) {
		 month2 = "June";
	 }
	 else if (count2 == 6) {
		 month2 = "July";
	 }
	 else if (count2 == 7) {
		 month2 = "August";
	 }
	 else if (count2 == 8) {
		 month2 = "September";
	 }
	 else if (count2 == 9) {
		 month2 = "October";
	 }
	 else if (count2 == 10) {
		 month2 = "November";
	 }
	 else if (count2 == 11) {
		 month2 = "December";
	 }


	cout << "The year's average monthly rainfall was " << average << " mm"<< endl;
	cout << month<< " has the highest rainfall " << max << " mm" << endl;
	cout << month2 << " has the lowes rainfall " << min << " mm" << endl;
	cout << "" << endl;

	int counter = 1;
	cout << "Month     Rainfall(mm)    Classification" << endl;
	cout << "-----     -----------     --------------" << endl;
	for (int i = 0; i < months; i++) {

		if (rainFall[i] >= above) {
			cout << setprecision(3)<<fixed<< setw(3) << counter << setw(16) << rainFall[i] << setw(17) << "Rainy" << endl;
		}
		else if (rainFall[i] <= below) {
			cout << setw(3) << counter << setw(16) << rainFall[i] << setw(17) << "Dry" << endl;
		}
		else {
			cout << setw(3) << counter << setw(16) << rainFall[i] << setw(17) << "Average" << endl;
		}
		counter++;
	}



}