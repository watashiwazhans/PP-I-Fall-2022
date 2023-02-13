#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  long long a, b, n;
  cin >> a >> b;

  for (int i=-60; i<=61; i++)
  {
    if (a * pow(2, i) == b)
    {
      cout << "YES " << i;
      return 0;
    }
    }
  cout << "NO";
}