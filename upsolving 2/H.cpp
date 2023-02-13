#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
            }
    } cout << a[n-2]*max;
}