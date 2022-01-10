#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string  str1;
    string  str2;

    cin >> str1 >> str2;
    for (size_t i = 0; i < str1.size(); i++)
    {
        int n1 = tolower(str1[i]);
        int n2 = tolower(str2[i]);
        if (n1 < n2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if(n1 > n2)
        {
            cout << 1 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    return 0;
}