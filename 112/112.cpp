#include <iostream>

using namespace std;

int main()
{
    float s = 4 - 0.5f - 0.2f - (1.0f / 6);
    int t = 1;
    float e = 1;
    int i = 1;

    while (e >= 1e-6)
    {
        t = t * 16;
        e = (4.0f / (8 * i + 1) - 2.0f / (8 * i + 4) - 1.0f / (8 * i + 5) - 1.0f / (8 * i + 6)) / t;
        s = s + e;
        i = i + 1;
    }

    cout << s;
    return 0;
}