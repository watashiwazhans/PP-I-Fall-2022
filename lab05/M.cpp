#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    int k, cnt=0;
    char n;
    cin >> n >> k;
    for(int i=0; i<s.size(); i++){
        if(s[i]==n){
            cnt++;
        }
    }
    for(int i=0; i<s.size(); i++){
        if(cnt==k){
            cout << "YES";
            break;
        }
        else{
            cout << "NO";
            break;
        }
    }
    
}