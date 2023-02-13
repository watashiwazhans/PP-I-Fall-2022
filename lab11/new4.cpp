#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i] >> a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i] < a[j]){
                swap(a[i],a[j]);
                swap(s[i],s[j]);
            }   
        }
    }
    for (int i = 0; i < n; i++){
        cout << s[i] << ": " << a[i] << endl;
    }
    return 0;
}