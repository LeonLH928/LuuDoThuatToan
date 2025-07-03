#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double s = 0;
	int t = 1;
	for (int i = 1;i <= n;i++)
	{
		t = t * i;
		s = sqrt(t + s);
	}
	cout << s;
	return 0;
}