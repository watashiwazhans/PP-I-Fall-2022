#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector <int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v.push_back(x);
    }
    int k; 
    cin >> k;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] == k) 
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}