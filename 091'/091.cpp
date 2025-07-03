#include<iostream>

using namespace std;

int main() {

	float x;
	int n;
	cin >> x >> n;

	float s = -1;
	int t = 1, m = 1, dau = 1;

	for (int i = 1; i <= 2*n; i += 2)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)dau * t / m;
		dau = -dau;
	}

	cout << "Gia tri cua s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}