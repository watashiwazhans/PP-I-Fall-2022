#include <iostream>

using namespace std;
int main()
{
    string s;
    getline(cin,s);

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 32)
        {
            s[i] += 0;
        }
        else if(s[i] == 'z')
        {
            s[i] = 'a';
        }
        else if(s[i] == 'Z')
        {
            s[i] = 'A';
        }
        else if(!islower(s[i]) && !isupper(s[i]))
        {
            s[i] += 0;
        }
        else
        {
            s[i] += 1;
        }
        cout << s[i];
    }
}