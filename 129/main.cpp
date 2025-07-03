#include<iostream>#
#include<math.h>
using namespace std;
int main()
{
	int a, b, c; cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(bs, c);
	cout << a << " " << b << " " << c;
	return 0;
}