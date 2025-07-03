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
		dn = 10 * dn + dv;
		t = t / 10;
	}
	
	if (dn == n)
		cout << "La DX";
	else
		cout << "Ko DX";
	return 0;
}