#include <bits/stdc++.h>

using namespace std;
int main(){
  int n;
  cin >> n;
  int a[1001] = {0};
  int x, maxi = 0;
  for(int i = 0; i < n; i++){
    cin >> x;
    maxi = max(maxi, x);
    a[x]++; 
  }
  int maxi2 = 0;
  for(int i = 0; i <= maxi; i++){
    if(a[i] > maxi2) maxi2 = a[i];
    maxi2 = max(maxi2, a[i]);
  }

  for(int i = maxi; i >= 0; i--){
    if(a[i] == maxi2) cout << i << " ";
  }
}