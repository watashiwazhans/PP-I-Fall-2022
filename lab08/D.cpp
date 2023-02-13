#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;
    vector <int> :: iterator it;
    it = v.begin() + k;
    v.erase(it);
    for (auto it = v.begin(); it != v.end(); ++it)
        cout << ' ' << *it;
    return 0;
    // v.erase(v.begin() + k);
    // for(int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    

}