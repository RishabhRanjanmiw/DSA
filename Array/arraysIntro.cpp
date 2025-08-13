#include <iostream>
using namespace std;

void printArray(int arr[] , int size) {
     cout << "printing the array" << endl;

  for (int i =0; i<size; i++) {
    cout<< arr[i] <<" ";
  }

}

int main() {
    // declare
    int num[15];
//    -------------------> checking the value of per index
    cout << "Value of 0th index" <<num[1] << endl;
    // ---------------->


    // initalisation an array--------------->

    int second[3] ={5, 7, 11};

    // accesing ana element
    cout<< "value at 2nd index   " << second[2] << endl;
 // ---------------->

   int third[15] = {2,7};

  int n =15;
 
 


  printArray(third,15);

  int fifth[10] ={1};
  n = 10;
  printArray(fifth, 10);
  int fifthSize = sizeof(fifth)/sizeof(int);
  cout<<" Size ofFifth is "<< fifthSize <<endl;


  char ch[6] = {'a','b','c', 'r','d'};
  cout <<ch[3] << endl;
  cout << "printing the char arr" <<endl;

//   for loop jha uper diya function use hona ho to------>
for (int i =0; i<6; i++) {
    cout<< ch[i] <<" ";
  }
  cout<< "printing Done" << endl;
  double firstDouble[6];
  float firstFloat[6];
  bool firstBool[9];


    cout << endl << "Everything is fine" << endl;
}