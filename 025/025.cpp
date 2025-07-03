#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
    cout << "\n\n\nKet thuc!!!!!\n\n\n";
    return 0;
}
