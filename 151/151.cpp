#include<iostream>

using namespace std;

int main() {


	int n; cin >> n;
	int flag = 1;
	int t = n;

	while (t > 1) {
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t /= 2;
	}

	if (flag)
		cout << "La dang";
	else
		cout << "Khong la dang";

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}