#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int ways = 0;
	for (int a = 0;a <= 2;a++) {
		for (int b = 0;b <= 5;b++) {
			for (int c = 0;c <= 20;c++) {
				for (int d = 0;d <= 50;d++) {
					if ((a * 50 + b * 20 + c * 5 + d * 2) == 100)
					{
						ways++;
					}
				}
			}
		}
	}
	cout << "Способов:" << ways << endl;
	cout << clock() << "ms";
}