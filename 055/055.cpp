#include<iostream>

using namespace std;


int main() {

	int n; cin >> n;
	float t = 1;

	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
			t *= i;
	}

	cout << "Tich cac uoc so le = " << t;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}