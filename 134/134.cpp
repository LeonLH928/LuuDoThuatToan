#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x <= y && y <= z)
		cout << "BDT dung";
	else
		cout << "BDT sai";
	return 0;
}