
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float s = 0;
    for (int i = 1; i <= n; i++)
        s = s + sqrt(1 + 1.0 / (i * i) + 1.0 / ((i + 1) * (i + 1)));
    cout << s;
}