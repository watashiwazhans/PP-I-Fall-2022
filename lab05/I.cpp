#include <bits/stdc++.h>

using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string rev=t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse (rev.begin(), rev.end());
    if(s==t || s==rev){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    }