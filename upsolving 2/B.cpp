#include<iostream>
using namespace std;
int main(){
    int w, h, n;
    cin >> w >> h >> n;
    int a[w][h];
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            a[i][j] = 0;
        }
    }
    int x1[n], y1[n], x2[n], y2[n];
    for (int k = 0; k < n; k++){
        cin >> x1[k] >> y1[k] >> x2[k] >> y2[k];
    }
    for (int k = 0; k < n; k++){
    for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            if (x1[k] <= i && i < x2[k] && y1[k] <= j && j < y2[k]){
                a[i][j] = 1;
            }
        }
    }
    }
    int cnt = 0;
     for (int i = 0; i < w; i++){
        for (int j = 0; j < h; j++){
            if (a[i][j] == 0){
                cnt++;
            }
        }
    }
    cout << cnt;
}