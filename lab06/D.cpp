#include <bits/stdc++.h>

using namespace std;

void goofyahh(int n, int a[], int m){
  for(int i=0; i<n; i++){
     if(a[i]==m){
      cout << "Yes";
      return;
     }
  } cout << "No";
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int m;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  cin >> m;
  goofyahh(n, a , m);
}

