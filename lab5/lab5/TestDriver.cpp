#include <iostream>
#include <iomanip>
#include<string>
#include "Faculty.h"
#include "Staff.h"
using namespace std;


int  main() {

	

	int const SIZE = 9;
	string array[9];




	//Setting date to be stored in 
	Date d;
	d.setDate(5, 5, 7);

	//passing in education of faculty
	Education e = Education("Ph.D", "Engineering", 4);

	//
	Faculty f = Faculty("last", "first", "120", 'M', d, "AO", e );

	Faculty* ptr = &f;


	//Faculty* Faculty(,e );

	



	return 0;
}