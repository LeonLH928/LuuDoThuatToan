#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x12 = x8 * x4;
	cout << x12;
	return 0;
}