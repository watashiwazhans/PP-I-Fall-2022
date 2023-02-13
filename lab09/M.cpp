#include <iostream>
#include <queue>

using namespace std;
int main()
{
    int n;
    cin >> n;
    
    queue <string> q;

    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        string s;
        if(x == 1)
        {
            cin >> s;
            q.push(s);
        }
        else if(x == 2)
        {
            q.pop();
        }

        if(q.empty())
        {
            cout << "queue is empty" << endl;
        }
        else 
        {
            cout << q.front() << endl;
        }
    }
}