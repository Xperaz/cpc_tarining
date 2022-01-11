#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, j, low = 0, up = 0;
    string  str;
    cin >> str;
    int len = str.length();
    for (i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            low += 1;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            up += 1;
    }
    
   if (up > low)
    {
        string nstr;
        for (j = 0; j < len; j++)
        {
            nstr = toupper(str[j]);
            cout << nstr;
        }
    }
    else
    {
        string nstr;
        for (j = 0; j < len; j++)
        {
            nstr = tolower(str[j]);
            cout << nstr;
        }
    }
    return 0;
}