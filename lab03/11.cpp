#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n, i;
	cin >> n;
	int a[n+1];
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	a[n+1] = a[n];
	for(i = 0; i < n; i++)
	{
		if(a[i] != a[i+1])
		{
			cout << a[i] << " ";
		}
	}
	
	return 0;
}