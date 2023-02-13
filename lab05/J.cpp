#include<iostream> 
using namespace std; 
int main(){ 
    string s, s_1, s1; 
    cin >> s; 
    for (int j = s.size()-1; j >=0; --j){ 
        s1 += s[j]; 
    } 
    if (s1 == s){ 
        cout << "YES"; 
        return 0; 
    } 
    s = s + s[0]; 
    for (int j = s.size()-1; j >=0; --j){ 
        s_1 += s[j]; 
    } 
    if (s_1 == s){ 
        cout << "YES"; 
    } 
    else{ 
        cout << "NO"; 
    } 
    return 0; 
}