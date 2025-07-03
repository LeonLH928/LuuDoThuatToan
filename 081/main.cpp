#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n, x; cin >> n>>x;
	float s = 0; int m = 1;
	for (int i = 0; i <= n; i++)
	{
		m *= (x + i);
		s += 1.0 / m;
	}
	cout << s << endl;
	return 0;
}