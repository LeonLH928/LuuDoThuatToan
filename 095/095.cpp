
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float s = 0;
    for (int i = n; i > 0; i--)
        s = sqrt(i + s);
    cout << s;
}
