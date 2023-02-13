#include <iostream>
using namespace std;
int main (){
   int n, m, i, cnt = 0;
   cin >> n >> m;
   bool is_prime=true;
   while (n < m) {
    is_prime = true;

    if (n == 0 || n == 1) {
      is_prime = false;
    }
 
    for (i = 2; i <= n/2; ++i) {
      if (n % i == 0) {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime) {
      cnt++;
      cout << " " <<  n;
    }
    ++n;
  } 
  cout << endl << cnt;
}