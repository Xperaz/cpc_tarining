#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, i;

    cin >> t;
    int arr[t];
    i = 0;
    while (i < t)
    {
        cin >> arr[i];
        i++;
    }
    sort(arr, arr + t);
    for (int j = 0; j < t; j++)
        cout << arr[j] << " ";
    return 0;
}