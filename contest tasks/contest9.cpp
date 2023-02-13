#include <bits/stdc++.h>

using namespace std;

int sum=0;
void samurize(int n, int m){
     sum += n;
     if(n==m) return;
     samurize(n+1 , m);
}

int main(){
   int n,m;
   cin >> n >> m;
   samurize(n,m);
   cout << sum << endl;
}