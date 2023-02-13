#include <iostream>

using namespace std;
int main (){
    int x, y, z;
    cin >> x >> y >> z;
    if(x+1==y && y+1==z){
        cout << "Yes";
   }
   else if(x==y && y+1==z)
   {
    cout << "Yes";
   }
   else if (y==z && x+1==y){
    cout << "Yes";
   }
   else { 
    cout << "No";
   }
}