#include<iostream>
#define PI 3.14
using namespace std;
int main()
{
	float R, n;
	cin >> R >> n;
	float s = n * R * R * sin(2 * PI / n) / 2;
	cout << s;
	cout << "\n\n\nKet thuc!!!!!";
	return 0;
}