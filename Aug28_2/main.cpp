#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int* array = (int*) malloc(5 * sizeof(int));
	array = (int*) realloc(array, 10000 * sizeof(int));
	for (int i = 0; i < 10000; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}
