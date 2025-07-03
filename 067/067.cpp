#include<iostream>

using namespace std;

int main() {

	int n; cin >> n;
	int flag = 0;
	int t = n;

	while (t != 0) {
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t /= 10;
	}

	if (flag)
		cout << "TT";
	else cout << "Ko TT";

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}