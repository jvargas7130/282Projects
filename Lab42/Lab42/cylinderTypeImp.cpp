
//Implementation file circleTypeImp.cpp

#include <iostream>
#include <iomanip>

#include "cylinderType.h"

using namespace std;

void cylinderType::print() const
{
	cout << "Base Center: ";
	//pointType::print();
	cout << endl;
	cout << "Base Radius" << radius<<endl;
	cout << "Base Circumference" << getCircumference() << endl;
	cout << "Base Area" << getArea() << endl;
	cout << "Cylinder Height " << getHeight() << endl;
	cout << "Cylinder SurfaceArea " << getSurfaceArea() << endl;
	cout << "Cylinder Volume " << getVolume() << endl;

	
}

void cylinderType::setHeight(double h)
{
	height = h;
}

double cylinderType::getHeight() const
{
	return height;
}

double cylinderType::getSurfaceArea() const
{
	return ((2 * 3.1416 * radius*height) +(2 * 3.1416 *(radius*radius)));
}

double cylinderType::getVolume() const
{
	return  3.1416 * (radius *radius)* height;
}



              //Belongs to class
void cylinderType::setBaseCenter(double x, double y)
{
	xCoordinate = x;
	yCoordinate = y;
}


void cylinderType::setCenterRadiusHeight(double x, double y,
	double r, double h)
{
	xCoordinate = x;
	yCoordinate = y;
	radius = r;
	height = h;
}
cylinderType::cylinderType(double x, double y ,
	double r, double h ):circleType(x, y,r) 
{
	radius = r;
	height = h;
}




