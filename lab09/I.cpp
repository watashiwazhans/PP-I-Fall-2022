#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    map <string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(mp[s] == 1)
            cout << "user already exists" << endl;
        else 
            cout << "new user added" << endl;
        mp[s] = 1;

    }    
}