#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * i;
        s = pow(s + t, 1.0f / (i + 1));
        i = i + 1;
    }
    
    cout << s;
    return 0;
}