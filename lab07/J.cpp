#include <bits/stdc++.h>

using namespace std;

int zhusup(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int k = n%10;
    k/=2;
    return zhusup(n/=10)+k;
}
int main()
{
    int n;
    cin >> n;
    cout << zhusup(n);
}