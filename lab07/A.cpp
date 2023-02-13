#include <bits/stdc++.h>

using namespace std;

int denji(int n)
{   if(n==0) return 1;
    else return pow(2,n);    
}

int main()
{
 int n;
 cin >> n;
 cout << denji(n);
 return 0;
}
