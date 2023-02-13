#include <iostream> 
#include <algorithm> 
using namespace std; 
int same (int n) {
    int a[n], b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
    int start=0;
    sort (a, a+n);
    sort (b, b+n);
    int cnt=0;
    for (int i=0; i<n; i++) {
        for (int j=start; j<n; j++) {
           if (a[i]==b[j]) {
               start=j+1;
               cnt++;
               break;
           }
    } }
return cnt;
}

int main () {
    int k; 
    cin >> k;
    cout << same (k);
    return 0;
}