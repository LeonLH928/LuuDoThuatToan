#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 1;i <= n;i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		cout << "Nguyen to";
	else cout << "Khong nguyen to";
	return 0;
}