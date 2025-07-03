#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nNhap n: ";
    cin >> n;

    int s = 0;
    int i = 1;

    while (i <= n)
    {
        s = s + (1 / i * (i + 1));
        i = i + 1;
    }

    cout << "\nS = " << s << endl;

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}