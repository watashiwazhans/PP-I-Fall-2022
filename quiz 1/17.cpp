#include <iostream>
using namespace std;
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    if(n==m && n!=k && m!=k){
        cout << "Yes";
    }
    else if (m==k && m!=n && k!=n){
        cout << "Yes";
    }
    else if (n==k && n!=m && k!=m){
        cout << "Yes";
    }
    else if (n==k && k==m){cout << "Yes";}
    else { cout << "No";}
    return 0;
}