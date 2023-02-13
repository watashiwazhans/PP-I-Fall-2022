#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }
    // int x=n,y=m;
    int k;
    cin >> k;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
          if(a[i][j]>k)
          {
            cnt++;
          }
        //   else 
        //   {
        //     cout << "No Penalty for today.";
        //   }
        }
    }
    if(cnt>0)
    {
        cout << "Penalty!";
    }
    else 
    {
        cout << "No penalty for today.";
    }
}