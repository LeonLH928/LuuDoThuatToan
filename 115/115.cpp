#include<iostream>

using namespace std;

int main() {

	int n; cin >> n;

	int att = -1;
	int at = 3;

	for (int i = 2; i <= n; ++i)
	{
		int ahh = 5 * at + 6 * att;
		att = at;
		at = ahh;
	}

	cout << at;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}