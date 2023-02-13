#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int n,m,k;
    cin >> n >> m >> k;
    if (n+m<=k || m+k<=n || k+n<=m){
        cout << "Invalid";
    }
    else if (n+m>k || m+k>n || n+k>m){
        cout << "Valid";
    }

       
}