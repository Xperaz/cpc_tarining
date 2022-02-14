#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, j, count = 0;
    string str1;
    string str2;

    cin >> str1;
    cin >> str2;

    for (i = 0; i < str2.length(); i++)
    {
       if (str1[count] == str2[i])
            count++;
    }
    count++;
    cout << count << endl;
}