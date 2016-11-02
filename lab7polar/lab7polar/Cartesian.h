#ifndef  CARTESIAN_h
#define  CARTESIAN_h
#include "Polar.h"

class Polar;

class Cartesian
{
protected:
	double x;
	double y;
public :
	Cartesian();


	Cartesian(double X, double Y);

	double getX();
	double getY();


	Cartesian(Polar p);


	Cartesian operator = (Polar p);

};


#endif;