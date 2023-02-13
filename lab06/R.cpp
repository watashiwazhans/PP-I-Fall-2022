#include <bits/stdc++.h>

using namespace std;

void goddamn(char n){
    if(islower(n)){
        n-=32;
    }
    cout << n;
}
int main(){
    char n;
    cin >> n;
    goddamn(n);
}