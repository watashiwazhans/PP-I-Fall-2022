#include <iostream>
using namespace std;
int main (){
    int m,n,z;
    cin >> m >> n >> z;
    if (m + n + z >= 70 && m+n>=30 && z>=20){
      cout << "YES!";
    }
    else{ cout << "NO.";}
}