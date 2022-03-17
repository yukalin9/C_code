#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "Point.h"
using namespace std;

void Triangle::print()
{
    cout << "The Triangle vertices are: ";
    p1.print();
    cout << ",";
    p2.print();
    cout << ",";
    p3.print();
    cout << endl;

}

void Triangle::enter()
{
	p1.enter();
	p2.enter();
	p3.enter();
}

Point Triangle::getCentroid()
{
	Point centroid;
	centroid.setX( (p1.getX() + p2.getX() + p3.getX()) / 3.0 );
	centroid.setY( (p1.getY() + p2.getY() + p3.getY()) / 3.0 );
	return centroid;
}

double Triangle::getPerimeter()
{
	double perimeter = 0.0;
	perimeter = p1.getDistanceTo(&p2)
		+ p2.getDistanceTo(p3)
		+ p3.getDistanceTo(p1);
	return perimeter;
}
