#include <bits/stdc++.h>

using namespace std;
void darinaCool(int a, int b){
 float c=sqrt((a*a)+(b*b));
 cout << setprecision(4) << c;
}

int main(){
    int a , b;
    cin >> a >> b;
    darinaCool(a, b);
}