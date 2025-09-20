#include <iostream>
#include "linkedlist.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	LinkedList list;
	LinkedList* list = new LinkedList();
//	delete list;
////	cout << list->getHead() << endl;
//	list = new LinkedList();
//	cout << "First node: " << list->head << endl;
//	cout << "Second node: " << list->head->next << endl;
//	cout << "3 node: " << list->head->next->next << endl;
//	cout << "4 node: " << list->head->next->next->next << endl;
//	cout << "5 node: " << list->head->next->next->next->next << endl;
	char op;
	int num, pos;
	do {
		cout << "Op: ";
		cin >> op;
		switch (op) {
			case 'l':
				cin >> num;
				list->add(num);
				break;
			case 'f':
				cin >> num;
				list->addFirst(num);
				break;
			case 'm':
				cin >> num;
				list->addMid(num);
				break;
			case 'p':
				list->print();
				break;
			case 'g':
				cin >> pos;
				num = list->get(pos);
				if (num == -1) {
					cout << "Invalid position" << endl;
				} else {
					cout << "Position " << pos << ": " << num <<endl;
				}
				break;
			case 'F':
				cout << "Removed " <<list->removeFirst()<<endl;
				break;
			case 'L':
				cout << "Removed " <<list->removeLast()<<endl;
				break;
			case 'x':
				cout << "Exiting...";
				break;
			default:
				cout << "Invalid operation" << endl;
		}
	} while (op != 'x');
	return 0;
}
