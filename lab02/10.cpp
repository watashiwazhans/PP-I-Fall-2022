#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int cnt=0;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        while(a>0){
            if(a % 10 ==0 ){
                cnt++;
            }
            a=a/10;
        }
    }
    cout << cnt;
    return 0;
}