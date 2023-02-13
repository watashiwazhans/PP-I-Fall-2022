#include <iostream>
using namespace std;

bool isValidNumber(string s, int n) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        char x = s[i];
        if (x >= '0' && x <= '9') cnt++;
		else cnt = 0;
		if (cnt == n) return true;
	}
    return false;
}

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;

    if (isValidNumber(s, n)) cout << "Valid";
    else cout << "Not valid";

    return 0;
}