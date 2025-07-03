#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "\nNhap n: ";
    cin >> n;

    int s = 1 - x;
    int t = x;
    int m = 1;
    int i = 3;
    int dau = +1;

    while (i <= 2 * n + 1)
    {
        t = t * x * x;
        m = m * i * (i - 1);
        s = s + dau * t / m;
        i = i + 2;
        dau = -dau;
    }

    cout << "\nS = " << s << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}