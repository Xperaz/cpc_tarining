#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
 
	int n;
	int k;
	cin >> n >> k;
		
	for (int j = 0,i = 0; j < n; ++j)
	{
		
			cout << char('a' + i);
	        i = (i + 1) % k;
	}
 
	return 0;
}