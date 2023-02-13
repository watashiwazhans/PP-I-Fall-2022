#include <iostream>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
    int i ;
    for(i = 0; i<s.size();i++) {
        if(!(isalpha(s[i])))
            break;
    }
    if(i == s.size())
        cout << s << endl;
    }       
    cout << endl;
    return 0;
}