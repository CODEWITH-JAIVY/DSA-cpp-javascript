// find the n number is even or odd  without division 

#include<iostream>
using namespace std  ;
int main () {

    int n  ;
    cout<<"Enter number to cheak number is odd or even " ;
    cin  >>  n  ;
    if( n & 1  ) {
        cout<< " given number is odd " ;
    }else  {
        cout<<"Given number is even " ;
    }
    return  0  ; 
}