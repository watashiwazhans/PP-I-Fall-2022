#include <iostream>

using namespace std;

int main(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    
    if(x>=a && (x+y)>=(a+b)){
        cout << "Yes";
    } else if(x<a && (x+y)>=(a+b)){
        cout << "No";
    } else if(x>=a && (x+y)<(a+b)){
        cout << "No";
    } else {
        cout << "No";
    }
}