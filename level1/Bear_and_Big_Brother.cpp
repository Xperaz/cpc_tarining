#include <iostream>
using namespace std;

int main() {
    int a, b, i;

    cin >> a >> b;

    i = 0;
    if (a > 10 || b > 10 || a < 1 || b < 1)
        return 0;
    else
    {
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            i++;
        }
    }
    cout << i;
    return 0;
}