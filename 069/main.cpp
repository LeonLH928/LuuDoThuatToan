#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n, x; cin >> n>>x;
	int t = 1;
	long s = 0;
	for (int i = 1; i <= n; i++)
	{
		t *= x;
		s += t;
	}
	cout << s << endl;
	return 0;
}