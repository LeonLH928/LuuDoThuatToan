#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    float s = 0;
    int t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        s = sqrt(t + s);
        i++;
    }
    cout << s;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
