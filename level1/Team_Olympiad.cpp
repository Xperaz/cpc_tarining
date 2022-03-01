#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
  int n, j = 0, k = 0, t = 0;
 
  cin >> n;
  int a0[5000];
  int a1[5000];
  int a2[5000];
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    if (x == 1)
    {
      a0[j] = i;
      j++;
    }
    else if (x == 2)
    {
      a1[k] = i;
      k++;
    }
    else if (x == 3)
    {
      a2[t] = i;
      t++;
    }
  }
  cout << min({j, k, t}) << "\n";
  for (int i = 0; i < min({j, k, t}); i++)
    cout << a0[i] << " " << a1[i] << " " << a2[i] << "\n";
  
  return 0;
}