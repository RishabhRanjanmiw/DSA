#include <iostream>
using namespace std;



 void update(int arr[], int n){
  cout << "Inside the Function " << endl;

//   updating the arr
arr[0] = 120;
  for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    } 
    cout<< endl;

  cout<< " Going back to the main function " << endl;
 }

int main() {

    int arr[3] ={2,3,4};

    // calling update function given above
    update(arr,3);
    for(int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
     cout<< endl;
    return 0;
}