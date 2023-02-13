#include <bits/stdc++.h> 

using namespace std; 
 
double GetPriceQualityRatio(double p, double q){ 
    return p/q; 
} 

int main(){ 
    int n; 
    cin >> n; 
    double max = 100000; 
    string s1; 
    while(n--){ 
        string s; 
        double p, q; 
        cin >> s >> p >> q; 
        double k = GetPriceQualityRatio(p, q); 
        if(max > k){ 
            max = k; 
            s1 = s; 
        } 
    } 
    cout << s1; 
 
}
 