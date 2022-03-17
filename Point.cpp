#include <iostream>
#include <cmath>
#include <iomanip>
#include "Point.h"
#include "Triangle.h"
using namespace std;

void Point::enter()
{
	cout << "Enter the x and y coordinates separated by a space: ";
	cin >> x >> y;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(999, '\n');
		cout << "Try again: " << endl;
		cout << "Enter the x and y coordinates separated by a space: ";
		cin >> x >> y;
	}
}

double Point ::getDistanceTo(Point *that)
{
	double xDiff = x - that->x;
	double yDiff = y - that->y;;
	double distance = sqrt(xDiff * xDiff + yDiff * yDiff);
	return distance;
}

double Point ::getDistanceTo(Point that)
{
	double xDiff = x - that.x;
	double yDiff = y - that.y;
	double distance = sqrt(xDiff * xDiff + yDiff * yDiff);
	return distance;
}


void Point::print()
{
	cout << fixed << setprecision(2) << "[" << x << "," << y << "]";
}

double Point::getX()
{
	return x;
}

double Point::getY()
{
	return y;
}

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}
