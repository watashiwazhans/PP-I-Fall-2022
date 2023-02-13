#include <iostream>
using namespace std;

string vowels(string s) {
    string t = "";
    for (int i = 0; i < s.size(); i++) {
        char x = s[i];
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' ) {
            continue;
        }
        t += x; 
    }
    return t;
}

int main() {
    string s;
    getline (cin, s);

    cout << vowels(s);

    return 0;
}   