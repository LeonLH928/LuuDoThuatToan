#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	while (n >= 10)
	{
		n /= 10;
	}
	cout << n<< endl;
	return 0;
}