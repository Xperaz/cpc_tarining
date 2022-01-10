#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, j, res;
    string arr;
    cin >> arr;
    int len = arr.size();
    i = 0;
    res = 0;
    while (i < len)
    {
        int count = 1;
        j = i + 1;
        while (j < len)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
                break;
            }
            j++;
        }
        if (count == 1)
            res += 1;
        i++;
    }
    if (res % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}