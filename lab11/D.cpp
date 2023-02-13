#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i < m;i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(a[i][j] == a[i-1][j] && a[i - 1][j] == a[i-1][j-1] && a[i][j] == a[i][j-1])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";

    return 0;
}