#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector <int> v;
    int n;
    while(cin >> n && n!=0)
    { 
        v.push_back(n);
    }

    for(int i = 0; i < v.size()/2; i++)`
    {
        cout << v[i] + v[v.size() - i - 1] << endl;
    }
}