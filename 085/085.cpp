#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int s = 0;
    int t = 1;
    int i = 1;
    int dau = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + dau * t;
        i = i + 1;
        dau = -dau;
    }
    cout << s;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
