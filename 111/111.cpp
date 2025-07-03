#include <iostream>
using namespace std;

int main()
{
	float s = 3;
	int dau = +1;
	float e = 3;
	int i = 2;
	while (e >= 1e-6)
	{
		e = 4 / (i * (i + 1.0) * (i + 2.0));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}