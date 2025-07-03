#include <iostream>
using namespace std;
int main()
{
	int x, n;
	cin >> x >> n;
	int s = 1;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s = s + t;
	}
	cout << s;
	return 0;
}