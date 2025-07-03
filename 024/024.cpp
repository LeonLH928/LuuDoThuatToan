#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double ht;
	ht = (n / 100) % 10;
	cout << ht;
	return 0;
}