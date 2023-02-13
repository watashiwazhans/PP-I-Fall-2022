#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int q;
  cin >> q;

  map <string, int> mp;

  for (int i = 0; i < q; ++i) {
    string name;
    cin >> name;
    int mark; cin >> mark;
    mp[name] += mark;
  }

  map <string, int> :: iterator it;
  for(it = mp.begin(); it != mp.end(); it++)
  {
    cout << (*it).first << " " << (*it).second << endl;
  }
}