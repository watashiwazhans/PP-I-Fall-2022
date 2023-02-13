#include <bits/stdc++.h>

using namespace std;


bool isSquare(int n){
    int root = sqrt(n);
    if(root*root==n) return true;
    else return false;
}
int main(){
    int n,m,s;
    cin >> n >> m >> s;
    if(s==1){
        for(int k=n; k<=m; k++){
            if(isSquare(k)){
                cout << k << " ";
            }
        }
    }
    else if(s==-1){
        for(int k=m; k>=n; k--){
             if(isSquare(k)){
                cout << k << " ";
             }
        }
    }
}
