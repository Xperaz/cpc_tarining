#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, p = 0, c = 0, x = 0;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
            p += x;
        else
        {
            if (p < 1)
                c += 1;
            else
                p -= 1;
        }
    }
    cout << c << endl;
    return 0;
}