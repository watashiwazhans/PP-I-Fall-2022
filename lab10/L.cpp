#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = 0;
    int a = n;
    while (n != 0)
    {
        m += n;
        n--;
    }
    vector<int> v1(m);
    int k = 0;
    for (int i = 1; i <= a; i++)
    {
        fill(v1.begin() + k, v1.begin() + k + i, i);
        k += i;
    }
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
}