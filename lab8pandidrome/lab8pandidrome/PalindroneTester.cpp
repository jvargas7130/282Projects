#include<iostream>
#include<string>

using namespace std;

void transform(char*raw, char*testStr);
bool testPalindrome(char*str);

int main()
{
	char* str = new char[80];

	char* finalStr = new char[80];
	 transform(str, finalStr);

	 if (testPalindrome(finalStr))
	 {
		 cout << "its Palindrone" << endl;
	 }

	return 0;
}

void transform(char*raw, char*testStr)
{
	int i = 0;
	int j = 0;
	while (raw[i])
	{
		if (isalnum(raw[i]))
		{
			testStr[i] = toupper(raw[i]);
		}
	}
	testStr[i] = '\0';
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

	}
	return true;

}