#include<iostream>

using namespace std;


int main() {

	int n; cin >> n;
	float s = 0;
	int t = 1;

	for (int i = 1; i <= n; ++i) {
		t *= i;
		s += i * t;
	}

	cout << "Gia tri cua s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}