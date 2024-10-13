#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	double s1, s2;
	cout << "¬ведите s1 и s2:"<<endl;
	cin >> s1 >> s2;
	for (int i = 0;i != 6;i++) {
		s2 += s1 / 2;
		s1 /= 2;
		s1 += s2 / 2;
		s2 /= 2;
	}
	cout << "s1=" << s1 << " L s2=" << s2<<" L";
}