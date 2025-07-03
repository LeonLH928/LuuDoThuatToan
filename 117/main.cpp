#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int ahh = 100;
	int att = -1;
	int at = 3;
	int t = 2;
	int i = 2;
	for (int i = 1; i <= n; i++)
	{
		t *= 2;
		ahh = 5 * t + 5 * at - att;
		att = at;
		at = ahh;
	}

	cout << ahh << endl;
	return 0;
}