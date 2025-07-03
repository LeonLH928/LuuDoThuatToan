#include<iostream>

using namespace std;

int main() {

	float s = 0;
	float e = 1;
	int i = 1;

	while (e >= 1e-6) {
		e = 1.0 / i;
		s += e;
		i += 2;
	}

	cout << "Gia tri cua s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}