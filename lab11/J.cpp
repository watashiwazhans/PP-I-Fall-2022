#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    pair<double, pair<int, int>> p[n];
    for (int i = 0; i < n; i++)
    {
        int x1, y1;
        cin >> x1 >> y1;
        p[i].second = make_pair(x1, y1);
        p[i].first = sqrt(pow((x - x1), 2) + (pow((y - y1), 2)));
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++)
    {
        cout << (p[i].second).first << " " << (p[i].second).second << endl;
    }
}