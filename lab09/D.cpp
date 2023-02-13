#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int k; cin >> k;
    
    vector <int> v;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }

    int cnt = 0;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == k)
        {
            cnt++;
        }
    }

    if(cnt >= 1)
    {
        cout << cnt;
    }

    else 
    {
        cout << 0;
    }
}