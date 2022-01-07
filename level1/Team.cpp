#include <iostream>
using namespace std;

int main() {
    int a, b, res, c, n;

    cin >> n;

    res = 0;
    if (n > 1000 || n < 1)
        return 0;
    else
    {
        while (n--)
        {
            cin >> a >> b >> c;
            if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
                res += 1;
            else
                res += 0; 
        }
    }
    cout << res;
    return 0;
}