#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        v2.push_back(v1[i]);
    }
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] != v2[i])
            cout << "Instead of " << v2[i] << " "
                 << "here was " << v1[i] << endl;
        else
            cout << "OK" << endl;
    }
    return 0;
}   