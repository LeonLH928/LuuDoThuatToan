#include<iostream>

using namespace std;

int main() {
	float x; 
	cout << "Nhap vao x: "; cin >> x;

	float x2 = x * x;
	float x4 = x2 * x2;
	float x5 = x4 * x;
	float x8 = x4 * x4;
	float x13 = x5 * x8;

	cout << "Gia tri x13 = " << x13;


	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}