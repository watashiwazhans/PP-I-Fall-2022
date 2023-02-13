#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map <string, int> mp;

    for(int i = 1; i <= n; i++)
    {
        string y; cin >> y;
        mp.insert(make_pair(y,i));
    }

    for(auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}
