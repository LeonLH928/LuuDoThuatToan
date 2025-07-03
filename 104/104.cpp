#include <iostream>

using namespace std;

int main()
{
    int s = 0;
    float e = 0.5;
    int i = 1;

    while (e >= 1e-6)
    {
        e = 1 / (i * (i + 1));
        s = s + e;
        i = i + 1;
    }

    cout << "\nS = " << s << endl;

        cout << "\n\n\nKet Thuc\n\n\n";
    return 0;
}