#include <iostream>

using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int a1[n], a2[m];
    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    } 
    for(int i=0; i<n; i++){
        a1[i]=0;;
    }
    for(int j=0; j<m; j++){
        a2[j]=0;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a1[i]+=a[i][j];
            a2[j]+=a[i][j];
        }
    }

    for(int i=0; i<n; i++){cout << "The sum of row number" << " " << i+1 << " " << "is" << " " << a1[i] << endl;
    }
    for(int j=0; j<m; j++){
        cout << "The sum of column number" << " " << j+1 << " " << "is" << " " << a2[j] << " " << endl;
    }
   return 0;
  }

