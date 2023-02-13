#include <bits/stdc++.h>

using namespace std;

bool isSakamoto(int n)
{
    if(n == 1) return true;
    if(n%2 != 0) return false;
    return isSakamoto(n/2);
}



int main()
{
    int t=0;
    int n;
    cin >> n;
    if(isSakamoto(n))
    {
      cout << "Yes";
    }
    else 
    {
        cout << "No";
    }
}
















    









