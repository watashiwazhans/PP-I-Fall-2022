#include <iostream>
using namespace std;

int main(){
    int n, m, min, sum = 0;
    
    cin >> n >> m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    
    for (int j = 0; j < m; j++){
        int a = 0;
        for(int i = 1; i < n; i++){
            if (arr[i][j] < arr[a][j]){
                a = i;
            }
        }
        sum = sum + arr[a][j];
        cout << a + 1 << ";" << j + 1 << endl;
    }

    cout << endl << "Their sum:" << endl << sum;
    return 0;
}
