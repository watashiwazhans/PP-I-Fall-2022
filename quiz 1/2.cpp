#include <iostream>
using namespace std;
int main (){

  int a, b, c;
  cin >> a >> b >> c;

  int mn = min(min(a, b), c);
  int mx = max(max(a, b), c);

  if (a<mx && a>mn){
    cout << mx << " " << a << " " << mn;

  } else if (b<mx && b>mn){

    cout << mx << " " << b << " " << mn;

  } else {
      cout << mx << " " << c << " " << mn;
  }

  return 0;
}