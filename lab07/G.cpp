#include <bits/stdc++.h>

using namespace std;

int makima(int n)
{
    if(n==0
    ) return 1;
    return makima((n-1))*n;
}
int main()
{
    int n;
    cin >> n;
    cout << makima(n);
}