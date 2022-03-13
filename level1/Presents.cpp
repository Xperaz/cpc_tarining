#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	for (int i = 1; i <= n; i++)
	{
		int value;
		cin >> value;
		arr[value] = i;
	}
	for (int i = 1; i <= n; i++)
		cout << arr[i] << " ";
	return 0;
}