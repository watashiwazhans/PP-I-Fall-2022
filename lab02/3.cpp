#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n%4==0 && n%100!=0 && 1<=n<=30000) 
    {cout << "YES";}
    else if (n%400==0)
    {cout << "YES"; }
    else {cout << "NO";}
    }