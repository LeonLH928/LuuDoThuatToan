#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	float s = 0;
	float i = 1;
	while (i <= n)
	{
		s = s + 1 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
		i = i + 1;
	}
	cout << s << endl;
	cout << "\n\n\nKet thuc!!!!!\n\n\n";
}