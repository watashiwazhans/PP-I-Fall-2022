#include <bits/stdc++.h>

using namespace std;
int main (){
    string str;
    cin >> str;
    string rev= str;
    reverse(rev.begin(), rev.end());
    if(str==rev) {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  }
