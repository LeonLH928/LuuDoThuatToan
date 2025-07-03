#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	float s = 0, m = 0, e = 1, i = 1;
	for (int i = 1; e >= 10/pow(10,7); i++)
	{
		m += i;
		e = 1 / m;
		s += e;
	}
	cout << s << endl;
	return 0;
}