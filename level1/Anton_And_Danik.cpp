#include <iostream>
using namespace std;

int main() {
    int n, i, a = 0, d = 0;
    cin >> n;
    string str;
    cin >> str;
    i = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            a += 1;
        else if (str[i] == 'D')
            d += 1;
        i++;
    }
    if (d > a)
        cout << "Danik";
    else if (d < a)
        cout << "Anton";
    else
        cout << "Friendship";
    return 0;
}