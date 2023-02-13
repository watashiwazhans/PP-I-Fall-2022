#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char c = s[0], ans = s[0];
    int cnt = 1, maxi = -1e5;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            cnt++;
            c = s[i];
        }else{
            if(cnt > maxi){
                maxi = cnt;
                ans = c;
            }
            cnt = 1;
        }
    }
    if(cnt > maxi){
        maxi = cnt;
        ans = c;
    }
    cout << ans << " " << maxi;
}