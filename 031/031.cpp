#include<iostream>

using namespace std;

int main() {
	int n; cin >> n;
	float s = 0;

	for (int i = 1; i <= 2 * n + 1; i += 2)
	{
		s += 1.0 / i;
	}

	cout << "Gia tri cua s = " << s;
		
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}