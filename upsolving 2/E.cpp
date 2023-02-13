#include <bits/stdc++.h>

using namespace std;
int sum=0;
void mybitchisgay(string s, int sum=0)
{
    for(int i=1; i<s.size(); i++)
    {
        sum += s[i]-48;
    }
        if(s[0]-48==sum%10)
        {
            cout << "YES";
        }
        else cout << "NO";
}

int main(){
    string s;
    cin >> s;
    mybitchisgay(s,sum);
}