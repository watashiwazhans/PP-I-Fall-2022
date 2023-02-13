#include <iostream>

using namespace std;
int main (){
int n;
cin >> n;
int cnt;
while (n!=0){
   if(n==0)
    {break;}
    if(n>=25){
    n=n-25;
    cnt++;}
    else if(n>=10){
    n=n-10;
    cnt++;}
    else if(n>=5){
        n=n-1;
        cnt++;
    }
   } cout << cnt;
  } 