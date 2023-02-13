#include <bits/stdc++.h>

using namespace std;

void kendrickLamar(string s, int n, int cnt){
     if (n<=cnt){
        cout << "YES";
     }
     else cout << "NO";
}
 int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            cnt++;
        }
    }
    kendrickLamar(s, n, cnt);
    
}