#include <bits/stdc++.h>

using namespace std;

bool isVowels(char c){
    return c =='a' || c =='y' ||c =='u' ||c =='e' ||c =='i' ||c =='o';

}
int main(){
   int n;
   cin >> n;
   string a[n];
   
   string iSaidoooh="";
   string s;
   for(int i=0; i<n; i++){
    cin >> a[i];
   }

   for(int i=0; i<n; i++){
    int af=a[i].size();
    int cnt=0;
    for(int j=0; j<a[i].size(); j++){
        if(isVowels(a[i][j])) cnt++;
    }
    iSaidoooh += a[i][af - cnt];
 }
}