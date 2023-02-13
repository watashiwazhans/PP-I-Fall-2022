#include <iostream>
using namespace std;

int main(){
    string s;
    int cnt=0;
    int cnt1=0;
    cin >>s;
    for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                cnt++;
            }
            if(s[i]>='A' && s[i] <='Z'){
                cnt1++;
            }
    }
    cout  << cnt  << " " << cnt1;
}