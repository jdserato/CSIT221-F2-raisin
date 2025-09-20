#include "list.hpp"
#include "node.hpp"
using namespace std;

class LinkedList : public List {
	public:
	node head, tail;
	int size;
	
	LinkedList() {
		tail.prev = &head;
		head.next = &tail;
		this->size = 0;
	}
	
	private:
	node* addBetween(int num, node* pred, node* succ) {
		// Create a node
		node* n = new node;
		n->elem = num;
		pred->next = n;
		n->prev = pred;
		succ->prev = n;
		n->next = succ;
		size++;
		return n;
	}
	
	
	public:
	
	void add(int num) {
		addBetween(num, tail.prev, &tail);
	}
	
	void addFirst(int num) {
		addBetween(num, &head, head.next);
	}

	
	void print() {
		cout << "FROM HEAD: ";
		node* curr = head.next;
		while (curr != &tail) {
			cout << curr->elem << " -> ";
			curr = curr->next;
		}
		cout << endl;
		
		cout << "FROM TAIL: ";
		curr = tail.prev;
		while (curr != &head) {
			cout << curr->elem << " -> ";
			curr = curr->prev;
		}
		cout << endl;
	}
	
	~LinkedList() {
		cout << "DESTRUCTOR";
//		while (head) {
//			node* temp = head;
//			head = head->next;
//			free(temp); // vs delete temp
//		}
	}
	
	void addMid(int num) {
		node* curr = &head;
		for (int i = 0; i < size/2; i++) {
			curr = curr->next;
		}
		addBetween(num, curr, curr->next);
	}
	
	int get(int pos) {
		if (pos > size || pos < 1) {
			return -1;
		
		}
		node* curr;
		if (pos <= size/2) {
			cout << "STARTING AT HEAD"<<endl;
			curr = head.next;
			for (int i = 1; i < pos; i++) {
				curr = curr->next;
			}
			return curr->elem;
		} else {
			cout << "STARTING AT TAIL"<<endl;
			curr = tail.prev;
			for (int i = size; i > pos; i--) {
				curr = curr->prev;
			}
			return curr->elem;
		}
		
		
	}
	private:
	int removeNode(node* n) {
		int res = n->elem;
		node* pred = n->prev;
		node* succ = n->next;
		pred->next = succ;
		succ->prev = pred;
		free(n);
		size--;
		return res;
	}
	
	public:
	int removeFirst() {
		return size > 0 ? removeNode(head.next) : -1;
	}
	
	int removeLast() {
		return size > 0 ? removeNode(tail.prev) : -1;
	}
};
