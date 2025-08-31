#include <iostream>
#include "triangle.hpp"
#include "sample.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void printTriangle(Triangle* t) {
	cout << "printTri ";
	t->p1->x = 2;
	cout << t->p1->x << endl;
	// do something
}

int main(int argc, char** argv) {
	Point* point1 = new Point;
	point1->x = 2, point1->y = -1;
	Point point2 = Point{6, 3};
	Point point3 = Point{7, 9};
	Triangle t = Triangle{point1, &point2, &point3};
	
	cout << "MAIN BEFORE" << point1->x << endl;
	printTriangle(&t);
	cout << "MAIN AFTER" << point1->x << endl;
	cout << "Size of " << sizeof(Sample) << endl;
//	Point* mid = point3.midpoint(point2);
	Point* mid = Point::midpoint(point3, *point1);
	cout << "Midpoint is " << mid->x << "," << mid->y << endl;
	delete[] mid;
	return 0;
}
