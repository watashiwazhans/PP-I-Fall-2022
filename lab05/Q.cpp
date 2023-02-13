#include<iostream> 
using namespace std; 
int main(){ 
    string s, t, s_1; 
    cin >> s >> t; 
    while (s_1.size() < t.size()) 
    { 
        s_1 = s_1 + s; 
    } 
    if (s_1 == t){ 
        cout << "YES"; 
    } 
    else { 
        cout << "NO"; 
    } 
    return 0; 
}