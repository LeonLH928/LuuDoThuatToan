#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc) lc = dv;
		t /= 10;
	}
	cout << lc << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}