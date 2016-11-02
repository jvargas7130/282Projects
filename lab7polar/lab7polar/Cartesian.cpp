#include "Cartesian.h"
#include<iostream>
#include<iomanip>
#include "Polar.h"
Cartesian::Cartesian()
{
	x = 0.0;
	y = 0.0;
}

Cartesian::Cartesian(double X, double Y)
{
	x = X;
	y = y;
}

double Cartesian::getX()
{
	return x;
}
double Cartesian::getY()
{
	return y;
}


 Cartesian::Cartesian(Polar p)
{
	 x = p.getRadius() * cos(p.getAngle());
	 y = p.getRadius() * sin(p.getAngle());

}

 Cartesian Cartesian::operator = (Polar p)
 {
	 x = p.getRadius() * cos(p.getAngle());
	 y = p.getRadius() * sin(p.getAngle());
	 return Cartesian(x, y);
 }
 