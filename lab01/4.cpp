#include <iostream>
using namespace std;
int main(){
    int n, bit1, bit2, bit3, bit4;
    cin >>n;
    bit1 = n%2;
    bit2 = (n/2)%2;
    bit3 = ((n/2)/2)%2;
    bit4 = (((n/2)/2)/2)%2;

    cout << bit1 * 8 + bit2 * 4 + bit3 * 2 + bit4 * 1;
}


