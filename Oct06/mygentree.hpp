#include "gentree.hpp"
#include <stdexcept>
class MyGenTree : public GenTree {
	int size;
	node* root;
	
	node* addRoot(int num) {
		// Check if you have an existing root
		if (root) {
			throw logic_error("Already has root");
		}
		root = new node;
		root->elem = num;
		root->children = new node*[10];
		root->num_child = 0;
		root->parent = nullptr;
		return root;
	}
	node* addChild(node* n, int num) {
	}
	void remove(node* n) {
	}
	int getSize() {
		return size;
	}
	node* getRoot() {
		return root;
	}
};
