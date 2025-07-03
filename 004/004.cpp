#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r;
    cin >> r;
    float s = 4 * M_PI * r * r;
    cout << s;
    return 0;
}