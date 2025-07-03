#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "\nNhap n: ";
    cin >> n;

    int flag = 1;
    int t = n;

    while (t > 1)
    {
        int du = t % 3;
        if (du != 0)
            flag = 0;
        t = t / 3;
    }

    if (flag == 1)
        cout << "\nSo nguyen duong n co dang 3^m.";
    else
        cout << "\nSo nguyen duong n khong co dang 3^m.";

    cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}