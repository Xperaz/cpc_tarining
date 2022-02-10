#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int k, r, i;
    cin >> k >> r;
    if (k > 1000 || r > 9)
        return (0);
    else {
        i = 1;
        while (1)
        {
            if ((k * i) % 10 == r || (k * i) % 10 == 0)
            {
                cout << i << endl;
                return (0); 
            }
            i++;
        }
    }
    return 0;
}