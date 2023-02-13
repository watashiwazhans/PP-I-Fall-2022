#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    int l,r;
    cin >> l >> r;
    for(int i=0; i<s.size(); i++){
        if(l<=i && i <=r){
            cout << s[i];
        }
    }
     

}

