#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='z'){
            s[i]-=25;
        }
        else if(s[i] >='a' && s[i]<='z'){
          s[i]+=1;
        }
        cout << s[i];
    }
}