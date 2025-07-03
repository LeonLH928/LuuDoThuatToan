#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int dem = 0;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 != 0)
            dem++;
        t /= 10;
    }
    cout << dem;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
