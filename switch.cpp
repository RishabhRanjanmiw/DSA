#include <iostream>
using namespace std;
 int main(){
    int num = 2;
    char ch = '3';
    cout << endl;

    switch (2*num) {
        case 4: cout<< "First" << endl;
        break;
        case 1:switch(ch){
            case '2':cout<<" Value of ch " << ch << endl;
            case '3': cout << "Value of ch " << ch << endl;
        }
        break;

        default: cout<<"It is a default case" << endl;

    }
    cout << endl;
 }