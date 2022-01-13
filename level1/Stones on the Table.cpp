#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, count = 0;

    cin >> n;
    char arr[n];

    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count += 1;
    }
    cout << count;
    return 0;
}