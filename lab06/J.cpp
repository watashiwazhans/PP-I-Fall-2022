#include <bits/stdc++.h>

using namespace std;

void blackjack(int n, int m, int s, int y){
    cout << max(max(n,m), max(s,y));
}
int main(){
    int n, m, s, y;
    cin >> n >> m >> s >> y;
    blackjack(n,m,s,y);
}