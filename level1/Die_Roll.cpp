#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
 
int main() {
  int x = 0, y = 0;
  cin >> y >> x;
  string fract[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
  int res = max(x, y);
  cout << fract[res - 1] << "\n";
  return 0;
}