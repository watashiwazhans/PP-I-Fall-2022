#include <bits/stdc++.h>

using namespace std;

void familyties(int n, int a[]){
 reverse(a,a+n);
 for(int i=0; i<n;i++){
    cout << a[i] << " ";
 }
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    familyties(n, a);
}