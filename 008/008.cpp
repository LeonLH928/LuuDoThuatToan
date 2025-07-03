#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float r;
	cin >> r;
	float p = 2 * n * r * sin(M_PI / n);
	cout << p;

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}