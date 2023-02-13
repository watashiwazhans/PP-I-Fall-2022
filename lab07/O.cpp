#include <iostream>
#include <algorithm>

using namespace std;

string s1;

string pov(int n, int m,  int k)
{
    int d = m + 48;
    if(d > 57)
        d += 7;
    s1.push_back(char(d));
    if(n < k)
        return s1;
    else
        return pov(n / k, (n / k) % k, k);
}

int main()
{

    int n, k; cin>>n>>k;
    string s2 = pov(n, n % k, k);
    reverse(s2.begin(), s2.end());
    cout << s2 << endl;

    return 0;
}