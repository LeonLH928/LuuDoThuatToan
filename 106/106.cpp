#include<iostream>
using namespace std;
#define pi 3.14
int main()
{
	float x;
	cin >> x;
	float xx = (x * pi) / 180;
	float s = xx;
	float t = xx;
	float m = 1;
	float dau = -1;
	float e = xx;
	float i = 3;
	while (e >= 0.000001)
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << s;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}