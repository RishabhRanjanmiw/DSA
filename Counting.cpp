#include <iostream>
using namespace std;
// Function Signature
void printCounting(int n){
    // functionbody
    for(int i=1; i<=n; i++) {
        cout<<i <<endl;
    }
     
}
int main() {
  int n;
  cin >> n;

//   functionCall
  printCounting(n);
    return 0;
}