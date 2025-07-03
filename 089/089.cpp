#include <iostream>
using namespace std;
int main()
{
	int x,n;
	cin >>x >> n;
	float s = 0;
	long long t = 1;
	int m = 0;
	int dau = -1;
	for(int i=1;i<= n; i++)
	{
		t = t * x;
		m = m + i;
		s = s +(float)(dau * t) / m;
		dau = -dau;
	}
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}