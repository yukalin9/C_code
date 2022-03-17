#ifndef POINT_H
#define POINT_H
class Point {
	double x;
	double y;
public:
	void enter();
	double getDistanceTo(Point *that);
	double getDistanceTo(Point that);
	void print();
	double getX();	double getY();	void setX(double x);
	void setY(double y);
};


#endif
