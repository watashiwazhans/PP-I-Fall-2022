#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> s, s1;
    
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;

        if(x % 2 == 0) 
        {
            s.push_back(x);
        }
        else 
        {
            s1.push_back(x);
        }
    }    

    sort(s.begin(), s.end(), greater <int> ());
    
    sort(s1.begin(), s1.end());

    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }

    for(int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << " ";
    }
}