#include <iostream>

using namespace std;

int main()
{
    float x;
    int n;
    cin >> x >> n;

    float s = x + 1.0f;
    float t = x;
    float m = 1.0f;
    int i = 3;

    while (i <= (2 * n + 1))
    {
        t = t * x * x;
        m = m * i * (i - 1);
        s = s + t / m;
        i = i + 2;
    }

    cout << s;
    return 0;
}