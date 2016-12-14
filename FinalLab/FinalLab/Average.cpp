#include"Average.h"
#include<iostream>
#include<iomanip>



Average::Average()
{

}

//methods
int Average::getCars()
{
	return cer_sum;
}


void Average::carserved() {
	cer_sum++;
}


float Average::getAverageTotaltime()
{
	return 	(float)total_waiting_time / cer_sum;
}
void Average::nextCar(int wait)
{
	total_waiting_time = total_waiting_time + wait;
}