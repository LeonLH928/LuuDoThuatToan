#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nNhap n: ";
    cin >> n;

    int dem = 0;
    int i = 2;

    while (i <= n)
    {
        if (n % i == 0)
            dem = dem + 1;
        i = i + 2;
    }

    cout << "\nSo luong uoc so chan cua n: " << dem << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}