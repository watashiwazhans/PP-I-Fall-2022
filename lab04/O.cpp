#include <iostream>
#include <limits.h>

using namespace std;
int main(){
    int n, a, b; 
    cin >> n;
    int arr[n][n];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    int max=INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && max < arr[i][j]){
                max = arr[i][j];
                a=i+1;
                b=j+1;
            }
        }
    }

    cout << "Maximum element is: " << max << " with coordinates: " << a << ";" << b;
}