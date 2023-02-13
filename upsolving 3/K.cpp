#include <bits/stdc++.h>

using namespace std;
int main()
{
    string n;
    cin >> n;
    
    int dec = 0; 
    for(int i = n.size() - 1, k = 0; i >= 0; i--, k++)
    {
        if(n[i] == '1')
        {
            dec += pow(2,k);
        }
    }
    cout << dec;
    
}