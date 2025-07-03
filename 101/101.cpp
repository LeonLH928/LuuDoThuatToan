#include <iostream>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	for (int i = 1; e >= 10e-6;i ++)
	{
		e = 1.0 / i;
		s = s + e;
	}
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}