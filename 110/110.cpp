#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;

	while (e >= 10e-6)
	{
		e = 4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << s;
	return 0;
}