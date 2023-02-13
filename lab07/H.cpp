#include <bits/stdc++.h>

using namespace std;

int uno(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 0;
    if(n == 2) return 1;
    return uno(n-1) + uno(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << uno(n);
}