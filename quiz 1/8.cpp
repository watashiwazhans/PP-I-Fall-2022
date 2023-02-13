#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    int sum = 0;
    int max = INT_MIN;

    for(int i=1; i<=n; ++i){
        cin >> a[i];
        sum += a[i];
    } 
    cout << sum << " ";

    for(int i=1; i<=n; ++i){

        if(max < a[i]){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}