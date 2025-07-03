#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	double s = 1;
	int t = 1;
	int m = 1;
	int i = 1;
	int e = 1;
	while (e >= 10e-6)
	{
		t = t * x;
		m = m * i;
		e = t / m;
		s = s + e;
		i++;
	}
	cout << s;
	return 0;
}