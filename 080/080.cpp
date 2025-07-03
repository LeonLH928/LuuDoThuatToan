#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cout << "\nNhap x: ";
    cin >> x;

    cout << "\nNhap n: ";
    cin >> n;

    int s = 1;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * x;
        s = s + (i + 1) * t;
        i = i + 1;
    }

    cout << "\nS = " << s << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}