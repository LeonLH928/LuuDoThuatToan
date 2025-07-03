#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nNhap n: ";
    cin >> n;

    int s = 0;
    int t = 1;
    int i = 1;

    while (i <= n)
    {
        t = t * i;
        s = s + t;
        i = i + 1;
    }

    cout << "\nS = " << s << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}