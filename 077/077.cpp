#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	cin >> k >> n;
	long long s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += pow(i, k);
	}
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}