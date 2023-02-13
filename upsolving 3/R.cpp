#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;

    char n;
    cin >> n;

    string shit = s;

    int cnt = 0; 
    
    reverse(shit.begin(), shit.end());

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == n)
        {
            cnt++;
        }
    }

    if(cnt == 1)
    {
        cout << s.find(n);
    }

    else if(cnt >= 2)
    {
        cout << s.find(n) << " " <<  s.size() - 1 - shit.find(n);
    }
}
