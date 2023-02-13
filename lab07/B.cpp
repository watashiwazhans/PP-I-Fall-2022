#include <bits/stdc++.h>

using namespace std;

string decimal(int n)
{
    if(n == 0)  return "0";
    else if( n == 1) return "1";
    else 
         return decimal(n/2)+decimal(n%2);
}
int main()
{
    int n;
    cin >> n;
    cout << decimal(n);
}