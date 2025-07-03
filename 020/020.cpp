#include <iostream>

using namespace std;

int main()
{
    int X;
    cout << "\nNhap x: ";
    cin >> X;

    int X2 = X * X;
    int X4 = X2 * X2;
    int X6 = X4 * X2;
    int X8 = X4 * X4;
    int X14 = X8 * X6;

    cout << "\nX14 = " << X14;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}