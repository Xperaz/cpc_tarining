#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  int n, t, k, d;
 
  cin >> n >> t >> k >> d;
  int rem = n / k;
  if ((n % k) != 0)
    rem += 1;
  int time_needed = rem * t;
  int total = t + d;
  if (time_needed <= total)
    cout << "NO";
  else
    cout << "YES";
  return 0;
}