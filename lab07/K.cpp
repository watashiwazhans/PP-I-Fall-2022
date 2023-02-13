#include <bits/stdc++.h>

using namespace std;

int passionfruit(string s, int i=0, int max=INT_MIN)
{
    if(max<s[i]-48) max=s[i]-48;
    if(i == s.size()) return max;
    else
        return passionfruit(s,i+1, max);
}


int main()
{
    string s;
    cin >> s;
    cout << passionfruit(s);
}