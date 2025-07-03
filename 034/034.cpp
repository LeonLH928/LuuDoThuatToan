#include<iostream>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	float s = 0;
	float i = 1;
	while (i <= 2 * n + 1)
	{
		s = s + i / (i + 1);
		i = i + 2;
	}
	cout << s << endl;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}