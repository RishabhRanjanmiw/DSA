#include <iostream>
using namespace std; 
int main() {
    // int n;
    cout<< "enter the value of n";
    // cin >> n;
    cout <<" printing cout from 1 to n "<<endl;
    // for(int i = 0; i<n; i++){
    // cout<< i <<endl;
    // }

    //  using multiple variable
     for (int a = 0, b = 1, c = 2; a>=0 && b>=1 && c>=2; a--,b--,c--){
        cout<<a << " " <<b << " " << c << endl;
     }
}