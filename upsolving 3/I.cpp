#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;

    string d;
    cin >> d;

    char t;
    cin >> t;

    string h = "";

    for(int i = 0; i < s.size(); i++)
    {
        bool flag = false;
        for(int j = 0; j < d.size(); j++)
        {
            if(s[i] == d[j])
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            h += t;
            cout << t;
        }  
        else 
        {
            h += s[i];
            cout << s[i];
        }
    }
    return 0;
}