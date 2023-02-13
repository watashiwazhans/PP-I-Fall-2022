#include <iostream>

// Given n numbers you need to count the number of even and the number of odd numbers from the given list.


using namespace std;
int main (){
    int n;
    cin >> n;
    int a ;
    int counterOdd = 0;
    int counterEven = 0;
for(int i = 0;i < n ;++i){
    
    cin >> a;
    if( a % 2 ==0){
        counterEven++;
    } else {
        counterOdd++;
    }}
    cout   << counterEven << " " << counterOdd;


return 0;
   }