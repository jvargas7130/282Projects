//Jesus Vargas
//CECS 282 LAB #8

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void transform(char*raw, char*testStr);
bool testPalindrome(char*str);

int main()
{
	



		char choose;
		

		do {
			char* str = new char[80];

			char* finalStr = new char[80];



			cout << "Enter string: ";
			cin.getline(str, 80);

			transform(str, finalStr);

			if (testPalindrome(finalStr))
			{
				cout << "its Palindrone" << endl;
			}
			else {
				cout << "Not a Palindrone" << endl;
			}

			cout << "Would you like to continue  y/n : " << endl;
			cin >> choose;

			cin.ignore();
		} while (choose == 'y');


	system("pause");
	return 0;
}

void transform(char*raw, char*testStr)
{

	int i = 0;
	int j = 0;
	while (raw[i])
	{
		if (isalpha(raw[i]))
		{
			testStr[j] = toupper(raw[i]);
			j++;
		}
		i++;
	}
	testStr[j] = '\0';
}



bool testPalindrome(char*str)
{
	int start = 0;
	int end = strlen(str) - 1;



	while (start < end)
	{	
		

		
		if (str[start] != str[end])
		{

		
			return false;
		
		}

		start++;
		end--;

	}
	
	return true;

}