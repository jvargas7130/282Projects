
#include"BooleanSource.h"
#include<iostream>
#include<iomanip>
#include <ctime>


using namespace std;



//constructor
BooleanSource::BooleanSource(float probability)
{

	prob = probability;
	time_t t;
	srand((unsigned)time(&t));
}

//methods
bool BooleanSource::query()
{
	//random returns a random number but the whole thing retunrs a boolean
	return rand() < (prob * RAND_MAX);
}
