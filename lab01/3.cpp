#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c = b/100;
    int d = b%10;
    cout << a + c + d;
    return 0;
}