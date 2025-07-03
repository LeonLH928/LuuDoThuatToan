#include <iostream>
using namespace std;
int main()
{
	float n;
	cin >> n;
	float s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += 1.0 / i;
	}
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}