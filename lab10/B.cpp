#include <bits/stdc++.h>

using namespace std;
long long i = -1;
long long powi()
{
    i++;
    return powl(i,i);
}

int main()
{
    int n;
    cin >> n;

    vector <long long> v(n+1);

    generate(v.begin(), v.end(), powi);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

