#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n]; int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum = 0;
    cin>>a[i];
    while(a[i] > 0)
    {
      sum += (a[i] % 10);
      a[i] /= 10;
    }
    if(sum % 2 == 0)
    {
      cout<<"Sum of digits is even!\n";
    }
    else
    {
      cout<<"Sum of digits is odd!\n";
    }
  }
  
  return 0;
}

