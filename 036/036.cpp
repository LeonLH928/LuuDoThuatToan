#include <iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	int t = 1;
	for (int i = 1;i <= n;i++)
		t = t * x;
	cout << t;
	return 0;
}