#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh, at = -2, tt = 3, pp = 7;
	for (int i = 2; i <= n; i++)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		at = ahh;
	}
	cout << ahh;
	return 0;
}