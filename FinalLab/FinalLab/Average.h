#ifndef  Average_h
#define  Average_h

class Average
{

protected:
	//instant variables
	int cer_sum = 0;
	float total_waiting_time = 0;
public:
	//methods
	Average();

	void carserved();
	int getCars();
	float getAverageTotaltime();
	void nextCar(int wait);
};



#endif
