#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    string s = "@gmail.com";
    
    for(int i = 0; i < n; i++)
    {
        if(a[i].find(s) != string :: npos)
        {
            a[i].erase(a[i].end() - 10, a[i].end());
            cout << a[i] << endl;;
        }
    }

    
}