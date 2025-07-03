#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "\nNhap a: ";
    cin >> a;

    cout << "\nNhap b: ";
    cin >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << "\nXuat hai so thuc theo thu tu tang dan: ";
    cout << a << " " << b << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}