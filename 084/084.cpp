#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	int s = 0;
	int t = x;
	for (int i = 1;i <= n;i++)
	{
		t = sin(t);
		s = s + t;
	}
	cout << s;
	return 0;
}