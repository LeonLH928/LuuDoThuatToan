#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	for (int i = 2; i <= 2 * n; i = i + 2)
	{
		s = s + (float)1 / i;
	}
	cout << s;
	return 0;
}