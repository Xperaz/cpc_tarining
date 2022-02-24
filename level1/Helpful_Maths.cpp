#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
  string nb;
  
  cin >> nb;
  sort(nb.begin(), nb.end());
  for (int i = 0; nb[i] != '\0'; i++)
    {
      if (nb[i] == '+')
        continue;
      else
      {
        cout << nb[i];
        if (nb[i + 1] != '\0')
          cout << "+";
      }
    }
    cout << "\n";
    return (0);
}