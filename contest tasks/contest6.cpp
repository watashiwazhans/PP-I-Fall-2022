#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
   cin >> n;
   if(n<0){cout << "YES";
   return 0;
   }
   int prev=0,cur=1;

   while (prev<=n){
    if(prev==n){cout << "YES";
    return 0;
    }

    int temp=cur;
    cur+=prev;
    prev=temp;
   }
   cout << "NO";

   
  
}