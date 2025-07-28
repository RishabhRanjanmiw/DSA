#include <iostream>
using namespace std; 
int main() {
    int i = 7;
    cout<< (++i) <<endl;
    // 8
    cout<< (i++) <<endl;
    //  i pehle print hoga jiski valur 8 hai print hone ke baad 9 ho jaayega
    cout<< (i--) <<endl;
    //  9 print hoga uske bad value dec me ho gaayega -->8
      cout<< (--i) <<endl;
    //    8 value hai lekin phekle hi dec me ho jaayega toh print 7 karega 
}