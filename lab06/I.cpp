#include <bits/stdc++.h>

using namespace std;
void damn(string s){
    for(int i=0; i<s.size(); i++)
{
    if(i%2==0 && islower(s[i])){
        s[i]-=32;
    } cout << s[i];
}
}
int main(){
   string s;
   cin >> s;
   damn(s);
   return 0;
}