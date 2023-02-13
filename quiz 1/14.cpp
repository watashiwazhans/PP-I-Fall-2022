#include <iostream>
using namespace std;
int main (){
int n;
cin >> n;
int k=((n/1000)-(((n%1000)%100)%10))*((n/1000)-(((n%1000)%100)%10));
int o=((n%1000)/100-((n%1000)%100)/10)*(((n%1000)%100)/10-(n%1000)/100);
if(k==0 && o==0){
    cout << "Yes";
}
else {
    cout<< "No";
}
}