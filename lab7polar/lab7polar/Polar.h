#ifndef  POLAR_h
#define  POLAR_h

#include<iostream>

class Polar {
protected:
	double radius = 0.0;
	double angle = 0.0;
public:
	Polar();
	Polar(double radius, double amgle);

	double getRadius();
	double getAngle();

	void display();

	Polar operator + (const Polar& f);


};



#endif;


