#include "washer.h"
#include<iostream>
#include<iomanip>

using namespace std;



washer::washer(int seconds)
{
	seconds_for_wash = seconds;
	wash_time_left = seconds;
}

//resets the timer
void washer::start_washing()
{
	wash_time_left = seconds_for_wash;
}

//iterator 
void washer::one_second()
{
	//cout << "timer" << wash_time_left << endl;
	wash_time_left -= 1;
}

//time left >0
bool washer::is_busy()
{
	return wash_time_left == 0;
}
