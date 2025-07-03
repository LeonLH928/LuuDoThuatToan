#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = pow(i + s, 1.0 / (i + 1));
		i = i + 1;
	}
	cout << "s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}