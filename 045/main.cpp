#include<iostream>#
#include<math.h>
#define PI 3.14
using namespace std;
int main()
{
	int n; cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += (float)1 / (sqrt(i) + sqrt(i + 1));
	}
	cout << s << endl;
	return 0;
}