#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a +n);
	for(i = n - 1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	return 0;
}