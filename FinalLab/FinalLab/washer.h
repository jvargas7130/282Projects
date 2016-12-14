#ifndef  washer_h
#define  washer_h



class washer
{
protected:
	//instant variables
	int seconds_for_wash;
	int wash_time_left;

public:
	//constructor
	washer(int seconds);

	//methods
	void start_washing();
	void one_second();
	bool is_busy();


};

#endif;