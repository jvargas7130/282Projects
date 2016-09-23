//Jesus Vargas
// CECS 282 LAB 32
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


const int ROWS = 4;
const int COLS = 5;

int getTotal(int testArray[][COLS], int rows, int cols);
double getAverage(int testArray[][COLS], int rows, int cols);
int getRowTotal(int testArray[][COLS], int rows, int cols);
int getColumnTotal(int testArray[][COLS], int rows, int cols);
int getHighestInRow(int testArray[][COLS], int rows, int cols);
int getHighestInRow(int testArray[][COLS], int rows, int cols);
int getLowestInRow(int testArray[][COLS], int rows, int cols);

int main()
{
	// Array with test data
	int testArray[ROWS][COLS] =
	{ { 1, 2, 3, 4, 5 },
	{ 6, 7, 8, 9, 10 },
	{ 11, 12, 13, 14, 15 },
	{ 16, 17, 18, 19, 20 }
	};

	// Display the total of the array elements.
	cout << "The total of the array elements is "
		<< getTotal(testArray, ROWS, COLS)
		<< endl;

	// Display the average of the array elements.
	cout << "The average value of an element is "
		<< getAverage(testArray, ROWS, COLS)
		<< endl;
	// Display the total of row 0.
	cout << "The total of row 0 is "
		<< getRowTotal(testArray, 0, COLS)
		<< endl;
	// Display the total of column 2.
	cout << "The total of col 2 is "
		<< getColumnTotal(testArray, 2, ROWS)
		<< endl;
	// Display the highest value in row 2. 
	cout << "The highest value in row 2 is "
		<< getHighestInRow(testArray, 2, COLS)
		<< endl;
	// Display the lowest value in row 2.
	cout << "The lowest value in row 2 is "
		<< getLowestInRow(testArray, 2, COLS)<< endl;

	system("pause");
	return 0;
}
//void addFive( int x[ ][COLSIZE], int rows, int cols)

//•	getTotal - This function should accept two-dimensional
//array as its argument and return the total of all the values in the array.
int getTotal(int testArray[][COLS],int rows, int cols) {
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum = sum + testArray[i][j];
		}
	}
		
	return sum;
}

//•	getAverage - This function should accept a two-dimensional array as
//its argument and return the average of values in the array.
double  getAverage(int testArray[][COLS], int rows, int cols) {
	double average = 0.0;
	int sum = getTotal(testArray, rows, cols);
	average =(double) sum / (rows*cols);



	return average;
}

//•	getRowTotal - This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. 
//The function should return the total of the values in the specified row.
int getRowTotal(int testArray[][COLS], int rows, int cols) {
	int sum = 0;

	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == rows) {
				sum = sum + testArray[i][j];
			}
		
			
		
		}
	}

	return sum;
}

//•	getColumnTotal - This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array.
//The function should return the total of the values in the specified column.
int getColumnTotal(int testArray[][COLS], int cols, int rows) {
	int sum = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j <= cols; j++) {
			if (j == cols) {
				sum = sum + testArray[i][j];
			}
		}
	}

	return sum;
}

//•	getHighestInRow - This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array.
//The function should return the highest value in the specified row in the array.
int getHighestInRow(int testArray[][COLS], int rows, int cols) {
	int max = testArray[2][0];
	
	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == rows) {

				if (max < testArray[i][j]) {
					max = testArray[i][j];
				}

			}
		

		}
	}
	
	return max;
}

//•	getLowestInRow - This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. 
//The function should return the lowest value in the specified row in the array.
int getLowestInRow(int testArray[][COLS], int rows, int cols) {
	int min = testArray[2][0];

	for (int i = 0; i <= rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i == rows) {
				if (min > testArray[i][j]) {
					min = testArray[i][j];
				}
			}

		}
	}

	return min;
}

