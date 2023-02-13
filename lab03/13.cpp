#include <iostream>
using namespace std;
int main() {
      int *Arr[1000],i=0,sizeofArr=0; 
    while(1){ 
 	    Arr[i] = new int; 
 	    cin >> *Arr[i]; 
 	    if(cin.get() == '\n'){ 
 		    break; 
 	    } 
 	    i++; 
 	    sizeofArr++; 
    } 
    int sum = 0;
    for (int j=0; j<= sizeofArr; j++){ 
 	    sum+=*Arr[j]; 
    } 
    cout << sum;
    return 0;
}