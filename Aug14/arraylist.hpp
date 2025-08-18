// ArrayList
#include <iostream>
#include "list.hpp"
using namespace std;
// ArrayList is a subclass of List
class ArrayList : public List {
	public:
	int size = 0;
	int array[5];
	
	void add(int num) {
		if (size >= 5) {
			cout << "Array full" << endl;
			return;
		}
		cout << "Adding " << num << endl;
		array[size++] = num;
	}
	
	int get(int pos) {
		return array[pos-1];
	}
	
	void print() {
		for (int i = 0; i < size; i++) {
			cout << "Array index " << i << ": " << array[i] << endl;
		}
	}
};
