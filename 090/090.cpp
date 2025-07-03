#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	int s = 0, t = 1, m = 1, dau = -1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		m = m * i;
		s = s + dau * t / m;
		dau = (-1) * dau;
	}
	cout << s;
	return 0;
}