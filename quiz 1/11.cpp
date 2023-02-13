#include <iostream>
using namespace std;
int main (){
    int x,y,z,k,m,p,o;
    cin >> x >> y >> z >> k >> m >> p >> o;
    if (k*x+m*y+p*z<=o){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
