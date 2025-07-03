#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0, i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	cout << "s = " << s;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;

}