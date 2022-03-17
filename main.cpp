#include <iostream>
#include <iomanip>
#include "Triangle.h"
#include "Point.h"

using namespace std;

int main() {
	Triangle tr;
	Point centroid;
	tr.enter();
	tr.print();

	centroid = tr.getCentroid();
   // tr.getCentroid().print();

	cout << "The centroid is ";
	centroid.print();
	cout << endl;

	cout << "The perimeter is " << fixed << setprecision(2) << tr.getPerimeter() << endl;

	system("pause");
	return EXIT_SUCCESS;
}
