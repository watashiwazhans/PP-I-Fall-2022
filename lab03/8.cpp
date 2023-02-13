#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
    int n, l, r, i;
	cin >> n >> l >> r;
	int a[n];
	long long int sum = 0;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = l - 1; i < r ; i++)
	{
		sum = sum + a[i];
	}
	cout << sum;
	return 0;
}