#include <bits/stdc++.h>

using namespace std;

const int d=1e4;
string students[d];
int cnt=0;
void agay(string student, int size){
     for(int i=0; i<size; i++){
        if(student == students[i]) {
            student[size] += '9';
        }
     }
}

int main(){
   int n,m;
   cin >> n;
   string a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    string b[m];
    for(int i = 0; i<n; i++){
         cin >> b[i];
    }

    for(int i=0; i<m; i++){
        agay(b[i], n);
    }

    sort(students,students+n);

    cout << "Missed student:" << endl;
    for(int i=0; i<n; i++){
        
    }
}