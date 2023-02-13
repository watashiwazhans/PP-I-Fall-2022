#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n; cin >> n;
    queue <int> st;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        st.push(x);
    }

    string s;
    while(s != "end")
    {
        cin >> s;
        if(s == "sell")
        {
            st.pop();
        }
        else if(s == "add")
        {
            int y; cin >> y;
            st.push(y);
        }
    }
    sort(st.begin(), st.end());
    cout << st;
}