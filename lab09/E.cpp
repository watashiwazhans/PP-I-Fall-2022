#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    map <string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        mp[x]++;
    }

    map <string,int> :: iterator it;
    int cnt = 0;
    for( it=mp.begin(); it!=mp.end(); ++it ) 
    {
        if(it->second == 3) 
        {
            cnt++;
        }
    }
    cout << cnt;
}