#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle {
	Point p1;
	Point p2;
	Point p3;
public:
	void print();
	void enter();
	Point getCentroid();
	double getPerimeter();


};


#endif
