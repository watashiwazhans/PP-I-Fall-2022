#include <iostream>

using namespace std;
int main (){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int cnt=0;
        int sum=0;
        int a1[n];
        for(int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin >> a[i][j];
                if(i==cnt){
                    sum=sum+a[i][j];
                } a1[i]=sum;
            }
            sum=0; 
            cnt++;
        }

        int pos=0;
        int min=a1[0]; 
        for(int i=0; i<n; i++){
            if(a1[i]<min){
                min=a1[i];
                pos=i;
            }
        }
        cout << pos+1 << endl;
        return 0;

    } 
