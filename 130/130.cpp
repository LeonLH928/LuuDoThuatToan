#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}