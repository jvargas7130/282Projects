//Jesus Vargas
// CECS 282 LAB #9


#include <iomanip>
#include <iostream>

using namespace std;


float *allocate(int rows, int cols);
void readm(float *matrix, int rows, int cols);
void writem(float *matrix, int rows, int cols);
void mulmatrix(float *matrix1, int rows1, int cols1, float *matrix2, int cols2, float *product);

int main() {
	int rows1,cols1;
	int rows2, cols2;




//Input the row size and column size for matrix M1 and M2
	cout << "Enter Matrix1" << endl;
	cin >> rows1 >> cols1;
	float* ptr1 = allocate( rows1,  cols1);

	cout << "Enter Matrix2" << endl;
	cin >> rows2 >> cols2;


	
	//validate the memory allocation
	float* ptr2 = allocate(rows2, cols2);

	//validate the memory allocation
	float* product = allocate(rows1, cols2);

	//input the matrix

	cout << "Fill in first Matrix" << endl;
	readm(ptr1,  rows1,  cols1);
	cout << "Matrix1" << endl;
	writem(ptr1, rows1, cols1);

	cout << "Fill in second Matrix" << endl;
	readm(ptr2, rows2, cols2);
	cout << "Matrix2" << endl;
	writem(ptr2,  rows2, cols2);
	


	
	//validate the product matrix dimension
	if (cols1 == rows2)
	{
		
		mulmatrix(ptr1, rows1, cols1, ptr2,  cols2, product);
		cout << "Product Matrix" << endl;
		writem(product, rows1, cols2);
		
	}
	else {
		cout << "Not a valid matrix" << endl;
	}

	
	system("pause");
	return 0;
}

//creating an empty matrix
float *allocate(int rows, int cols)
{
	float *ptr = new float[rows *cols];
	return ptr;
}

//fill array with user input
void readm(float *matrix, int rows, int cols)
{
	float num;

	for (int i =0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Enter number at" << endl;
			cout << "Row:" << i << "Col: "<< j << endl;
			
			cin >> num;
			matrix[i*cols + j] = num;
			
		}
	}




}

//Display the matrix
void writem(float *matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout <<matrix[i*cols + j]<<" ";
		
			

		}
		cout << "" << endl;
	}
}


//multiply matrices
void mulmatrix(float *matrix1, int rows1, int cols1, float *matrix2, int cols2, float *product)
{


	int i, j, k;
	for (i = 0; i < rows1; i++ )
	{

		for (j = 0; j < cols2; j++ )
		{
			for (k = 0, *product = 0; k < cols1; k++)
			{
				/*p[i,j] +=m1[i,k]*m2[k j]*/

				*product += matrix1[i*cols1 + k] * matrix2[k*cols2 +j];
			

			
			}

			product++;
		}
	}


	
}

