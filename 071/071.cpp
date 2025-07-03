
#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	int s = x;
	int t = x;
	for (int i = 3; i <= 2 * n + 1; i = i + 2)
	{
		t = t * x * x;
		s = s + t;
	}
	cout << s;
}
