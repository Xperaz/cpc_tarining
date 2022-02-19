#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int n, m;
 
  const int max = 100;
  cin >> n;
  int arr[max];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    --x;
    if (x != 0)
      arr[x - 1] += y - 1;
    if (x != n - 1)
      arr[x + 1] += arr[x] - y;
    arr[x] = 0;
  }
  for (int i = 0; i < n; i++)
    cout << arr[i] << "\n";
  
  return 0;
}