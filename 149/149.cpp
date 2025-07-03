#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	int ucln = m + n;
	cout << ucln << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}