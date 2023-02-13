#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long power;

    for (int i=0;i<=n;i++){
        power=pow(2,i);
        cout << power << endl;
    }
}