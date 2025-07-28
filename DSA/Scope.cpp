#include <iostream>
using namespace std; 
int main(){
    //  koi bhi variable tab atak use nahi akr skate jab tak hum value declre nahji kar dete;
    int a =3;
    cout<< a <<endl;
    // ------------------->
    if(true){
        //  cannot give error(due to 2 a) becuase of it have in the score of turue value
        int a =30;
        cout<< a <<endl;
    }
    // ----------------------------------->

    for( int i=0; i<8; i++){
        cout<<" HI " << endl;
    }
}