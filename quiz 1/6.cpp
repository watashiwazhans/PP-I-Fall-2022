#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int sum;
    sum=0;
    for(int i=1; i<n; i++){
        if (i<n){
            cout << i;
       }
       sum=sum+i;
       cout << sum;
       return 0;
    }
}