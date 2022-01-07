#include <iostream>
using namespace std;

int main() {
    int n, h, i, res = 0;
    cin >> n;
    cin >> h;
    int   arr[n];
    if (n < 1 || n > 1000 || h < 1 || h > 1000)
        res = 0;
    else
    {
        i = 0;
        while (n > i)
            cin >> arr[i++];
        int j = 0;
        while (n > j)
        {
            if (arr[j] > h)
                res += 2;
            else
                res += 1;
            j++;
        }
    }
    cout << res;
  return 0;
}