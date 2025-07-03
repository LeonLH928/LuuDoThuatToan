#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "\nNhap a: ";
    cin >> a;

    cout << "\nNhap b: ";
    cin >> b;

    cout << "\nNhap c: ";
    cin >> c;

    int delta = b * b - 4 * a * c;

    if (delta <= 0)
    {
        if (delta == 0)
        {
            float X = (-b) / 2 * a;
            cout << "\nPhuong trinh co nghiem kep: " << X;
        }
        else
            cout << "\nPhuong trinh vo nghiem.";
    }
    else
    {
        float X1 = (-b + sqrt(delta)) / 2 * a;
        float X2 = (-b - sqrt(delta)) / 2 * a;

        cout << "\nNghiem X1 = " << X1;
        cout << "\nNghiem X2 = " << X2;
    }

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}