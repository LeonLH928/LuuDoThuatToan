
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float at = 2;
	float ahh;
	for (int i = 2; i <= n; i++)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
	}
	cout << ahh;
}
