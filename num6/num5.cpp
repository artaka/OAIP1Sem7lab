#include <iostream>
using namespace std;

int main() {
	double t, x, b = 3, i = 8, c = 6e-4, a = 6;
	while (i < 24) {
		t = (a * i) / ((a * a - b) * exp(-a));
		if (t > 5 * c) {
			x = 4.8e-3 + i * a;
		}
		else {
			x = a + i * i * t;
		}
		i += 4;
	}
}