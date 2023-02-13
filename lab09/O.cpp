// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     map <string, string > mp;
//     for(int i = 0; i < n; i++)
//     {
//         string s,s1;
//         cin >> s >> s1;
//         mp.insert(make_pair(s,s1));
//     }

//     int k; cin >> k;
//     vector <pair<string,string>> v;
//     for(int i = 0; i < k; i++)
//     {
//         string h,l;
//         cin >> h >> l;
//         v.push_back(make_pair(h,l));
//     }

//     map < string,string> :: iterator it;
//     for(it = mp.begin(); it != mp.end(); it++)
//     {
//         for(int i = 0; i < v.size(); i++)
//         {
//             if((*it).first == v[i].first && (*it).second == v[i].second)
//             {
//                 cout << "correct password" << endl;
//             }
//             else if((*it).first != v[i].first &&(*it).second == v[i].second)
//             {
//                 cout << "login error" << endl;
//             }
//             else if((*it).first == v[i].first && (*it).second != v[i].second)
//             {
//                 cout << "password error" << endl;
//             }
//         }
//     }

// }

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;

    map <string, string> mp;
    for(int i = 0; i < n; i++)
    {
        string s, s1;
        cin >> s >> s1;
        mp[s] = s1;
    }

    int m; cin >> m;
    for(int j = 0; j < m; j++)
    {
        string h, l;
        cin >> h >> l;
        if(mp.find(h) == mp.end())
        
            cout << "login error" << endl;
        
        else if(mp[h] != l)
        
            cout << "password error" << endl;
        
        else 
        
            cout << "correct password" << endl;
        
    }

}