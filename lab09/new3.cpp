#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n; cin >> n;
    int m; cin >> m;
    vector <int> v;
    for(int i = 0; i < m; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++)
    {
        if(n > v[i])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";`
}