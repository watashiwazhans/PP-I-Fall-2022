#include <bits/stdc++.h>

using namespace std;

vector <int> goodNumber(int n, int m){
    string s = to_string(n);
    bool ok=true;
    for(int i=0; i< s.size(); i++){
       if(i%2==0 && (s[i]-48)%2==0) continue;
       if(i%2!=0 && s[i]) 

    }

}

int main(){
   int n, m;
   cin >> n >> m;
   vector <int> t = goodNumber(n, m);
}