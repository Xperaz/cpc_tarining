#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, f, res = 0;
    cin >> n;
    int tmp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        if (f != tmp)
            res += 1;
        tmp = f;
    }
     cout << res << endl;
    return 0;
}