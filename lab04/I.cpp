#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    long long d,c;
    long long a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            d= sqrt(a[i][j]);
            c=a[i][j];
            if(d*d==c){
               a[i][j]= sqrt(a[i][j]);
            }
        } 
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        } cout << endl;
    }
}