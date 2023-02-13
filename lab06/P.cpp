#include <bits/stdc++.h>

using namespace std;

void onepiece(int n){
    if(n<0){
        cout << abs(n);
    }
    else cout << n;
}
int main(){
   int n;
   cin >> n;
   onepiece(n);
}
