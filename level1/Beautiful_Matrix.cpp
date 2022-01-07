#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i, j, x, y;
    int arr[5][5];
    
    i = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i;
                y = j;
                break;
            }
            j++;
        }
        i++;
    }
    cout << abs(x - 2) + abs(y - 2);
    return 0;
}