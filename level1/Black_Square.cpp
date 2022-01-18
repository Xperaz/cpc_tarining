#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int  count = 0, i, j;
    int arr[5];

    for (i = 1; i < 5; i++)
        cin >> arr[i];
    string  str;
    cin >> str;
    for (j = 0; str[j] != '\0'; j++)
    {
        for (i = 1; i < 5; i++)
        {
           if(i == (str[j] - 48))
           {
               count += arr[i];
           }
        }
    }
    cout << count << endl;
    return 0;
}