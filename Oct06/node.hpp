struct node {
	int elem;
	node* parent;
	node** children; // max 10
	int num_child;
};
