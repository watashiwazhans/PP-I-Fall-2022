#include <iostream>
using namespace std;
int main(){
    int n,x,y,sum=0,cnt=1;
    cin >> n >> x >> y;
    while(n >= cnt){
        cout << x << " ";
        sum=sum+x;
        cnt=cnt+1;
        x=x+y;
    }
    cout << endl << "sum:"<< " " << sum;
}
