#include <iostream>
#include "entry.h"
using namespace std;

class Scoreboard {
	Entry* board;
	int size = 0;
	
	public:
	Scoreboard() {
//		board = new Entry[5];
		board = (Entry*) calloc(5, sizeof(Entry));
	}
	bool add(Entry e) {
		if (size < 5) {
			cout << "Adding to 2: " << board << endl;
			board[size++] = e;
			return true;
		} else {
			cout << "Board full";
			return false;
		}
	}
	
	void print() {
		for (int i = 0; i < 5; i++) {
			cout << (i+1) << ". ";
			if (i < size) {
				Entry e = board[i];
				cout << e.name << " (";
				cout << e.college << ") - ";
				cout << e.score << endl;
			} else {
				cout << "(none)" << endl;
			}
		}
	}
};
