#include<iostream>

using namespace std;

int main() {

	float a, b;
	cin >> a >> b;
	
	if (a == 0) {
		if (b == 0)
			cout << "VSN";
		else cout << "VN";
	}
	else {
		float x = -b / a;
		cout << x;
	}

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}