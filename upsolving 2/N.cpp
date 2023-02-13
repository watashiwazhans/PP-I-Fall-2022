#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n/2];
    int b[n/2];
    for(int i =0;i<n/2;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        cin>>b[i];
    }
    for(int i=0;i<n/2;i++){
    int cnt=0;
    int x=b[i];
    int sum=0;
    int u=1;
    while(x>0){
        x=x/10;  // я считаю количество digits
        cnt++;
    }
    x=b[i];
    u=pow(10,cnt-1);  //для переворота  если 3 числа ,то тогда будем умножать на 100 ,потом на 10
    while(x>0){
        int f=x%10; // 243 =3
        f=f*u;  // 3 * 10^2
        x=x/10;  //24
        sum+=f;  // наше число 300+
        u=u/10; //100 /10
}
b[i]=sum; // присаваиваем нашему массиву полностью перевернутое число 
}
reverse(b,b+n/2); 
for(int i=0;i<n/2;i++){
    if(a[i]!=b[i]){
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";
}