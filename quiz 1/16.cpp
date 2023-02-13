#include <iostream>
using namespace std;
int main (){
    int n, stop = 0;
    cin >> n;
    while(n > 0){
        if(stop % 7 == 0){
            stop++;
            continue;
        }
        else if(stop % 2 == 0){
            n -= 4;
        }
        else if(stop % 2 != 0){
            n += 3;
        }
        stop++;
    }
    cout << stop;
  return 0;
}