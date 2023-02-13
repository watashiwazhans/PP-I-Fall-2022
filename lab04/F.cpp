#include <iostream>

using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    int max=INT8_MIN;
    int maxX,maxY;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(max<a[i][j]){
                max=a[i][j];
                maxX=i+1;
                maxY=j+1;
            }
        }
    } cout << maxX << " " << maxY << endl;
}