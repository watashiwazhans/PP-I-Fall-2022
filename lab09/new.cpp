#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n; cin >> n;

    map <int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }

    map <int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        it++;
        cout << it->first << endl;
        return 0;
    }

}
