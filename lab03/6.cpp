#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n, i;
	cin >> n;
	int a[n];
	for(i = 0; i < n ; i++)
	{
		cin >> a[i];
	}
	for(i = n - 1; i >= 0; i = i - 1)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}