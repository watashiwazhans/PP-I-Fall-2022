#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for(i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int k = n + m;
	int c[k];
	for(i = 0; i < n; i++)
	{
		c[i] = a[i];
	}
	for(i = 0; i < m; i++)
	{
		c[i+n] = b[i];
	}
	sort(c, c+k);
	for(int i = 0; i < k; ++i){
		cout << c[i] << " ";
	}
	return 0;
}