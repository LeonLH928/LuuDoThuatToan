#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int flag = 0;
    int i = 0;
    while (i <= n)
    {
        if (i * i == n)
            flag = 1;
        i++;
    }
    if (flag)
        cout << "La so chinh phuong.";
    else
        cout << "Khong la so chinh phuong.";
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
