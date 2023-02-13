#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    char max=CHAR_MIN;
    for(int i=0; i<s.size(); i++){
        if(max<s[i]){
            max=s[i];
        }
    } cout << max << " ";


    char min=CHAR_MAX;

    for(int i=0; i<s.size(); i++){
        if(min > s[i]){
            min = s[i];
        }
    } cout << min;
}