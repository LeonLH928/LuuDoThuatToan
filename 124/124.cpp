#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int at = 2;
    int bt = 1;
    int i = 2;
    int ahh = -1;
    int bhh = -1;

    while (i <= n)
    {
        ahh = at * at + 2 * bt * bt;
        bhh = 2 * at * bt;
        i = i + 1;
        at = ahh;
        bt = bhh;
    }

    cout << ahh << " " << bhh;
}