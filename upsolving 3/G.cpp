#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    char a[n];
    int cnt [n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[i] = 0;
    }

    sort(a, a+n);

    for(int i = 0; i < s.size(); i++) 
    {
        for(int j = 0; j < n; j++)
        {
            if(s[i] == a[j])
            {
                cnt[j]++;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " - " << cnt[i] << endl;
    }

}