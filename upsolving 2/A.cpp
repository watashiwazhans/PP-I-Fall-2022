#include <iostream>
using namespace std;
int main()
{
  int n;
  int k=0, l=0;
  int sum1 = 0;
  int sum2 = 0;
  cin >> n;
  int a[n];

  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=0; i<n; i++)
  {
    if(a[i]%2 == 0)
    {
      sum1 += a[i];
      k++;
    }
    else
    {
      sum2 += a[i];
      l++;
    }
  }

  cout << "Left hand magic power: " << k * sum1 << endl;
  cout << "Right hand magic power: " << l * sum2;
}
