#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            cout << i << " ";
        i++;
    }
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
