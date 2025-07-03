#include<iostream>
using namespace std;
int main()
{
	float n;
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = (-9 * at + 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	cout << ahh;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}