#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    float s = 0;
    int m = 0;
    int i = 1;
    int dau = 1;

    while (i <= n)
    {
        m = m + i;
        s = s + (float)dau / m;
        dau = -dau;
        i = i + 1;
    }

    cout << s;
    return 0;
}