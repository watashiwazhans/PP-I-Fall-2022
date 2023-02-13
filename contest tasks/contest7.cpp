#include <bits/stdc++.h>

using namespace std;

string dayuuumn(string s){
    int cnt=0;
    string ans ="";
    for(int i=0; i<s.size(); i++){
      if(s[i]=='1'){
        ans += char('a' + cnt);
        cnt=0;
      }
      if(s[i]=='0'){
        cnt++;
      }
    return ans;
   } 
 }


int main(){
    string s;
    cin >> s;
    dayuuumn(s);
}

