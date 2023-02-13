#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    int n, l, r, i;
	cin >> n >> l >> r;//5 4 5        2 8 10 5 12
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < l - 1; i++)
	{
		cout << a[i] << " ";
	}
	for (i = r - 1; i >= l - 1 ; i--)
	{
		cout << a[i] << " ";
	}
	for(i = r; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}