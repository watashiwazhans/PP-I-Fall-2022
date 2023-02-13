#include <bits/stdc++.h>

using namespace std;

int saule(int n, long long sum=0)
{
    cin >> n; sum+=n;
    if(n==0) return sum;
    else return saule(n,sum);
}
int main()
{
    cout << saule(0,0);
}
