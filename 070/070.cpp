#include<iostream>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << s << endl;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}