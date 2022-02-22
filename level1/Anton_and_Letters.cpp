#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
  string str;
  int count = 0;
 
  getline(cin, str);
  sort(str.begin(), str.end());
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z' && str[i] != str[i - 1])
        count += 1;
  }
  cout << count << "\n";
  return 0;
}