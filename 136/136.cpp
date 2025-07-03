#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;
    int n = x;

    while (n <= y)
    {
        bool dk1 = ((n % 400 == 0) && (n % 100 != 0));
        bool dk2 = n % 400;
        if (dk1 && dk2)
            cout << i << "\n";
        n = n + 1;
    }

    return 0;
}