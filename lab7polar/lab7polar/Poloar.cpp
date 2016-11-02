
#pragma once
#include "Polar.h"
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

Polar::Polar()
{

}

Polar::Polar(double r, double a)
{
	radius = r;
	angle = a;
}

double Polar::getRadius() 
{
	return radius;
}

double Polar::getAngle()
{
	return angle;
}

void Polar::display() {
	cout <<radius <<","<< angle<< endl;
}


Polar Polar::operator + (const Polar& p) {



	Cartesian c1;

	c1 = *this;

	Cartesian c2;

		c2 = p;



	//int num1 = (f1.whole * f1.denom) + f1.numer;
	//int num2 = (this->whole *  this->denom) + this->numer;



	//explixit
	//double x1 = f.radius*cos(f.angle);
	//double y1 = f.radius*sin(f.angle);

	//inplicit
	//double x2 = this->radius*cos(this->angle);
	//double y2 = this->radius*sin(this->angle);


	//double newX = x1 + x2;
	//double newY = y1 + y2;
		cout << "x1 " << c1.getX() << endl;
		cout << "x2 " << c2.getY() << endl;

		cout << "y1 " << c1.getY() << endl;
		cout << "y2 " << c2.getY() << endl;


	double newX = c1.getX() +  c2.getX();
	double newY = c1.getY() + c2.getY();



	//switch back to polar
	double r = sqrt(pow(newX,2) + pow(newY,2));
	double theta = atan(newX / newY);

	return Polar(r, theta);

}