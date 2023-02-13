#include <iostream>
using namespace std;

int main () {
    int n, m, i;
	cin >> n >> m;
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] == m)
		{
			cout << i + 1;
		}
		else if(a[i] < m && a[i + 1] > m)
		{
			cout << i + 1;
		}
		else if(a[n-1] < m)
		{
			cout << n;
			break;
		}
	}
	return 0;
}