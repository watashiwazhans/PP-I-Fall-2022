#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) return true;
    else return false;
}

int main()
{
    string s;
    cin >> s;
    if(isPalindrome(s)) 
    {
        cout << "Yes";
    }
    else 
    {
        cout << "No";
    }
}