#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    string s; getline(cin,s);
    for(int i = n; i < s.size(); i++)
    {
        cout << s[i];
    }
}