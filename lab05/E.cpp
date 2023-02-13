#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin >> s;
    int sum=0;
    int sum1=0;
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            sum=sum+(s[i]-48);
        }
        else if(i%2!=0){
            sum1= sum1+s[i]-48;
        }
    }

    for(int i=0; i<s.size(); i++){
         if(sum1==sum){
            cout << "YES";
            break;
        }
        else if(sum!=sum1){
            cout << "NO";
            break;
        }
    } 
}