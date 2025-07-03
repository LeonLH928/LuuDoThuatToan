
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> x >> n;
    float s = 0;
    int t = 1;
    for (int i = 1; i <= n; i++)
    {
        t = t * x;
        s = s + sin(t);
    }
    cout << s;
}
