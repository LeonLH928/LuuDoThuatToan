#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = sqrt(2 + s);
	}
	cout << s << endl;
	return 0;
}