#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    string sor=s;
    sort(sor.begin(), sor.end());
    if(s==sor){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}