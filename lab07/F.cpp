#include <bits/stdc++.h>

using namespace std;


int ayan(string s, int pos)
{
    if(pos == s.size()) return 0;
    if(s[pos] % 2 == 0) return ayan(s,pos+1)+1;
    return ayan(s,pos+1);
}
int main()
{
    string s;
    cin >> s;
    cout << ayan(s,0);
}



















