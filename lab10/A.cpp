#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <string> v;
    vector <int> v1;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        int k; cin >> k;
        v1.push_back(k);
    }

    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " " << v1[i] << endl;
    }
}