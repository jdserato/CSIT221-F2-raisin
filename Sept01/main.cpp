#include <iostream>
#include "scoreboard.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	Point p1 = Point{-1, 7};
//	Point* p2 = new Point;
//	p2->x = 5;
//	p2->y = 3;
//	cout << "P1: " << p1.x << "," << p1.y << endl;
//	cout << "P2: " << p2->x <<"," <<p2->y << endl;
//	Point m = p2->midpoint(&p1); 
//	cout << "Midp: " << m.x << "," << m.y << endl; 

	char op;
	Entry e;
	Scoreboard* board = new Scoreboard();
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'a':
				cin.ignore();
				cout << "Enter name: ";
				getline(cin, e.name);
				cout << "Enter college: ";
				cin >> e.college;
				cout << "Enter score: ";
				cin >> e.score;
				board->add(e);
				break;
			case 'p':
				board->print();
				break;
			default:
				cout << "Invalid input";
		}
	} while (op != 'x');
 	return 0;
}
