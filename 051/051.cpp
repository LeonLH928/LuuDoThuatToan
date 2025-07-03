#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int t = 1, i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 1;
	}
	cout << "t = " << t;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}