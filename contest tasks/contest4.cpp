#include <bits/stdc++.h>

using namespace std;
int main (){
    int n, m;
    cin >> n >> m;
    int x;
    int cnt=0;
    cin >> x;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            if(x==a[i][j]){cnt++;
            break;
            }
        }  
    } cout << cnt;
}