#include <iostream>
using namespace std;

int print(string s,int sum=0,int i=0){
    if(i==s.size()){
        return sum;
    }
    sum+=s[i]-'0';
    return print(s,sum,++i);    
}
int main(){
    string s;
    cin >> s;
    cout << print(s);
}