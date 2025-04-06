
#include<iostream>
using namespace std  ;
int XOROF( int a , int b ) {
    return a^b ;
}
int leftShift(int a) {
    return a << 1;
}

int main() {
int result = XOROF( 12 , 8 ) ;
cout<<  leftShift(4) <<endl  ; 
cout<< result  ; 
}