#include <bits/stdc++.h>

using namespace std;
int main()
{
    string n; 
    cin >> n;

    stack <char> s;

    for(int i = 0; i < n.size(); i++)
    {
        if(!s.empty() && s.top() == '(' && n[i] == ')')
        {
            s.pop();
        }
        else 
        {
            s.push(n[i]);
        }
    }

    if(s.empty())
    {
        cout << "YES";
    }
     else 
    {
        cout << "NO";
    }
}