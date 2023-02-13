
#include <iostream>
#include <limits.h>

using namespace std;
int main(){
    int n, m, a, b;
    cin >> n;
    m = n*2-1;
    a = n;
    b = n;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if (j+1>=a && j+1<=b){
                cout << "*";
            }
            else{
                cout << ".";
            }
        }
        a--;
        b++;
        cout << endl;
    }
}

