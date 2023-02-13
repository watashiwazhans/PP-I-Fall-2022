#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin >>n;
    long long sum=0;
    int a[n];
    sum=0;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    } cout<<sum;
    return 0;
     }
