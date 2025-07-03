#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	int t = x;
	for (int i = 1;i <= n;i++)
		t = t * (x + i);
	cout << t;
	return 0;
}