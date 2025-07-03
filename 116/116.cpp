#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nNhap n: ";
    cin >> n;

    int att = 1;
    int at = 2;
    int i = 2;

    int ahh;
    while (i <= n)
    {
        ahh = 4 * at + att;
        i = i + 1;
        att = at;
        at = ahh;
    }

    cout << "\nahh = " << ahh << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}