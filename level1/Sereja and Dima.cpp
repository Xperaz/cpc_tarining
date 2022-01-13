#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i, j, s = 0, d = 0;

    cin >> n;
    int arr[n];
    for ( i = 0; i < n; i++)
        cin >> arr[i];
    i = 0;
    j = n - 1;
    int turn = 0;
    while (i <= j)
    {
        int temp;
        if (arr[i] > arr[j])
        {
            temp = arr[i];
            i++;
        }
        else{
            temp = arr[j];
            j--;
        }
        if (turn == 0)
        {
            s += temp;
            turn = 1;
        }
        else{
            d += temp;
            turn = 0;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}