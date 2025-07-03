
#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
    float x;
    cin >> x;
    float xx = (x * 3.14) / 180;
    float s = 1;
    float m = 1, t = 1;
    int dau = -1;
    float e = 1;
    int i = 2;
    while (e >=10e-6)
    {
        t = t * xx * xx;
        m = m * (i - 1) * i;
        e = t / m;
        s = s + dau * e;
        dau = -dau;
        i += 2;
    }
    cout << s;
}
