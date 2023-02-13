#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,x;
    cin >> n;
    string s;
    set <int> a;
    for(int i=0; i<n; i++){
        cin >> s;
        if(s == "ADD"){
            cin >> x;
            a.insert(x);
        } else if(s == "PRESENT"){
            cin >> x;
            if(a.find(x) == a.end())cout << "NO\n";
            else cout << "YES\n";
        }
        else if(s == "COUNT"){
            cout << s.size() << "\n";
        }
    }

}
