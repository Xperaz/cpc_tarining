#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int n, b, d, count = 0, sum = 0;
 
  cin >> n >> b >> d;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 0; i < n; i++)
  {
    if (arr[i] <= b)
      sum += arr[i];
    if (sum > d)
    {
      if (sum > d)
        count += 1;
      sum = 0;
    }
  }
  cout << count << "\n";
  return 0;
}