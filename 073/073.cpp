#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    float s = 0;
    int t = 1;
    int m = 0;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        m = m + i;
        s = s + (float) t / m;
        i = i + 1;
    }
    cout << s;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
