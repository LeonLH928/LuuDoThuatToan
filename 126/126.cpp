#include <iostream>
using namespace std;
int main()
{
	float a, b, lc;
	cin >> a >> b;
	lc = a;
	if (lc < b)
		lc = b;
	cout << lc;
	return 0;
}