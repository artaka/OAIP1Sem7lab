	#include <iostream>
	using namespace std;

	int main() {
		int counter = 0, i = 1;
		while (counter != 6) {
			if (i % 3 == 0 && i % 5 == 0) {
				counter++;
				cout << i << endl;
			}
			i++;
		}
	}	