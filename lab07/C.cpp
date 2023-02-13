#include <bits/stdc++.h>


using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);

    int k; cin >> k;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == k)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}
        
    














