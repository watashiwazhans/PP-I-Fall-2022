#include <iostream>

using namespace std;
int main (){
    long long n;
    cin >> n;
    int a[n][n];
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
           cout << "[*]";
        } cout << endl;
    }
    return 0;
}
