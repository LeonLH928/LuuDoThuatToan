#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int flag = 1;
	int x = n;
	while (x > 1)
	{
		if (x % 5 != 0) flag = 0;
		x /= 5;
	}
	if (flag) cout << "La dang 5^x";
	else cout << "Khong la dang 5^x";
	return 0;
}