#include <iostream> 
using namespace std; 
int main() 
{ 
  string s; 
  int mx; 
  cin >> s; 
 
  for (int i=0; i<s.size(); i++) 
  { 
    if(int(s[i]) > mx) 
    { 
      mx = s[i]; 
    } 
  } 
 
  cout << char(mx); 
  return 0; 
}