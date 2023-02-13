#include <bits/stdc++.h>

using namespace std;
int n;
void absss(int a[], int b[]){
    for(int i=0; i<n; i++){
      cout << abs(a[i]-b[i]) << " ";
    }
}
int main(){ 
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    absss(a , b);
    cout << endl;
}