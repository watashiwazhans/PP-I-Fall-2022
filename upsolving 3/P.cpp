#include <iostream>

using namespace std;


void strShit(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(1 == s.size() && s[i] == '1')
        {
            cout << "true";
        }
        else if(1 == s.size() && s[i] == '0')
        {
            cout << "false";
        }
        else 
        {
            cout << s[i];
        }
    }
}

int main()
{
    string s;
    cin >> s;
    strShit(s);
}
