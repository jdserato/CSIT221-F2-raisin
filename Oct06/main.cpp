#include <iostream>
#include "mygentree.hpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	GenTree* tree = new MyGenTree();
	node* thirteen = tree->addRoot(13);
	tree->addChild(thirteen, 16);
	tree->print();
	return 0;
}
