#include<iostream>

using namespace std;

int main() {

	int n; cin >> n;
	float s = 0;

	for (int i = 1; i <= n; ++i)
	{
		s += 1.0 / (i * (i + 1) * (i + 2));
	}

	cout << "Gia tri cua S = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}