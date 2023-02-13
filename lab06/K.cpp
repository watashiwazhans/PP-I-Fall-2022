#include <bits/stdc++.h>

using namespace std;
int sum=0;
void coffey(int n){
if(n==0)return;

sum += n%10;
coffey(n/10);
}


int main(){
   int n; 
   cin >> n;
   coffey(n);
   cout << sum; 
}