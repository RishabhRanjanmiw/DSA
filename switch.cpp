#include <iostream>
using namespace std;
 int main(){
    int num = 5;
    char ch = '3';
    cout << endl;

    switch (num) {
        case 1: cout<< "First" << endl;
        break;
        case 5:switch(ch){
            case '2':cout<<" Value of ch " << ch << endl;
            case '3': cout << "Value of ch " << ch << endl;
        }
        break;

        default: cout<<"It is a default case" << endl;

    }
    cout << endl;
 }