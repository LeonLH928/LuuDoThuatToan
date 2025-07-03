#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int at = 2;
	double ahh;
	for (int i = 2;i <= n;i++)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		at = ahh;
	}
	cout << ahh;
	return 0;
}