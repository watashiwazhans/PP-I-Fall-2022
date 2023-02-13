#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{
    if(x == 0 || x == 1) return false;
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0) return false;
    }
    return true; 
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        v.push_back(x);
    }
    int m;
    cin >> m;
    int cnt = 0;

    for(int i = 0; i < n; i++)
    {
    if(isPrime(v[i]) && v[i] >= m)
    {
        cnt++;
    }
    }
    cout << cnt;

}