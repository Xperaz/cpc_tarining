#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
  char i;
  int j, n, k;

  cin >> n >> k;
  j = 0;
  i = 'a';
  char arr[n];
  while (j < k)
  {
    if (i == 27)
      i = 'a';
    arr[j] = i;
    i++;
    j++;
  }
  int len = n - k;
  if (len > 0)
  {
    i = 'a';
    for (int t = 0; t < len; t++)
    {
      if (t == k)
      {
        i = 'a';
        t = 0;
        len -= k;
      }
      arr[j] = i;
      j++;
      i++;
    }
    
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  
  return 0;
}