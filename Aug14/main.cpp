#include <iostream>
#include "arraylist.hpp"
using namespace std;

int main() {
	List* list = new ArrayList();
//	ArrayList* list2 = new ArrayList();
	list->add(3);
	list->add(7);
	list->add(9);
	list->add(13);
	list->add(17);
	list->add(90);
	list->add(23);
	cout << "Third element " << list->get(3) << endl;
//	list2->add(27);
	list->print();
//	cout << "LIST2" ;
//	list2->print();
	cout << "DONE"  << endl;
	return 0;
}
