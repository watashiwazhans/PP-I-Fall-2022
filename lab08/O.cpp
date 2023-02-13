#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main()
{
    string s; cin >> s;
    set <int> v;
    for(int i = 0; i < s.size(); i++)
    {
        v.insert(tolower(s[i]));
    }
    
    int cnt = 0;

    set <int> :: iterator it;
    cout << v.size() << endl;
    for(it = v.begin(); it != v.end(); it++)
    {
        cout << (char)*it << " ";
    }
}
