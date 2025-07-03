#include<iostream>
using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float t = 1;
	float i = 1;
	while (i <= n)
	{
		t = t * sin(x);
		s = s + t;
		i = i + 1;
	}
	cout << s << endl;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}