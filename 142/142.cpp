#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	cout << dn;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}