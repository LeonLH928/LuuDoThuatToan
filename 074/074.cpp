#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	float s = 0;
	int t = 1;
	int m = 1;
	int i = 1;

	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + 1.0 * t / m;
		i = i + 1;
	}
	cout << s;
	return 0;
}