#include <iostream>
using namespace std;
int main (){
    int n,m,k;
    cin >> n >> m >> k;
    if(n==m && n!=k && m!=k){
        cout << "YES";
    }
    else if (n==m==k){
        cout << "NO";
    }

    else if(m==k && m!=n && k!=n){
        cout << "YES";
    }
    else if (n==k && n!=m && k!=m){
        cout << "YES";
    }
    else {cout << "NO";}
}