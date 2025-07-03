#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float s = 1;
    int m = 1;
    float e = 1;
    int i = 1;
    while (e >= pow(10, -6))
    {
        m = m * i;
        e = 1.0 / m;
        s = s + e;
        i = i + 1;
    }
    cout << s;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
