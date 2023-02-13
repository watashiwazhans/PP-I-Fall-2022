#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int n, i, max, min;
	cin >> n;
	int a[n];
	min = pow(10, 9);
	max = pow(-10, 9);
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	for(i = 0; i < n; i++)
	{
		if(max == a[i])
		{
		a[i] = min;
	    }
	    cout << a[i] << " ";
	}
	return 0;
}