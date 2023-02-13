#include <bits/stdc++.h>

using namespace std;
void ahh(long long n){
    
    if((n/1000000000)%2==0 && (n/1000000)%2==0 && (n/100000)%2==0 && (n/10000)%2==0 && (n/1000)%2==0 && (n/100)%2==0 && (n/10)%2==0) 
        cout << "Valid";
    else {
        cout << "Not valid";
    }
  }
int main(){
    long long n;
    cin >> n;
    ahh(n);
}