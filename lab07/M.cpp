// #include <bits/stdc++.h>

// using namespace std;

// int freedom(int m,int n=0)
// {
//     if(n == m) return freedom(0,0);
//     n++;
//     cout << n << " ";
//     return freedom(m,n);
// }
// int main()
// {
//     int m;
//     cin >> m;
//     cout << freedom(m,0);
// }
#include <iostream>

using namespace std;


int pov(int a[], int l, int n)
{
    a[l] = l;
    if(l == n)
        return a[n];
    else
        return pov(a, l + 1, n);
}

int main()
{

    int n; cin>>n; int a[n];
    a[n] = pov(a, 1, n);
    for(int i = 1; i <= n; i++)
        cout << a[i] <<" ";

    return 0;
}