#include <iostream>
using namespace std;
int main()
{
	int n,ahh,at;
	cin >> n;
	at = 2;
	for (int i = 2; i <= n; i++)
	{
		ahh = at + 2 * i + 1;
		at = ahh;
	}
	cout << ahh << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}