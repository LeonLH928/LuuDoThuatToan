#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	float s = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) s += i;
	}
	cout << s << endl;
	return 0;
}