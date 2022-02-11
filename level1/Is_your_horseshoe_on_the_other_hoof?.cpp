#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, j, count = 0;
    int arr[4];
    for (i = 0; i < 4; i++)
        cin >> arr[i];
    int seen[4];
    for ( i = 0; i < 4; i++)
        seen[i] = 0;
    
    for (int i = 0; i < 4; i++)
    {
        if (seen[i] == 0)
        {
            for (j = i + 1; j < 4; j++)
            {
                if (arr[i] == arr[j])
                {
                    count += 1;
                    seen[j] = 1;
                }
            }
        }
    }
    cout << count << endl;
}