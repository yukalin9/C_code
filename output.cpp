#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "Point.h"

using namespace std;

int main() {
	Triangle tr;
	Point p1;
	Point p2;
	Point p3;
	p1.enter();
	p2.enter();
	p3.enter();
	tr.getCentroid();
	tr.print();
	cout << "The centroid is [" << fixed << setprecision(2) << p1.getX()  <<
		"," << p2.getY() << "]" << endl;

	cout << "The perimeter is " << fixed << setprecision(2) << tr.getPerimeter() << endl;

	system("pause");
	return EXIT_SUCCESS;
}
