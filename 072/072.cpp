#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	int m = 0;
	for (int i = 1; i <= n;i++)
	{
		m = m + i;
		s = s + 1 / m;
	}
	cout << s;
	return 0;
}