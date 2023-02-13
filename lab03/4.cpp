#include <iostream>
using namespace std;
int main (){
int n, i, z;
    cin >> n;
int max = -9999999;
int a[n];
z=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (i=0; i<n; i++){
        if (max<a[i]){
            max = a[i];
            z = i + 1;
        }
} cout << z;
return 0;
}