// find the sum of n natural number using recution 
#include<iostream>
using namespace std ;

int sum ( int n  ) {
// base case it mendatry in the recution where ther funtion will be terminate  

 if ( n ==1 ) {
    return 1  ; 
 }
 return  n  + sum( n-1) ;

}
// 3+2+1 = 6 
int main() {
    int n =  3  ;
    int result  = sum( n ) ;
    cout<< result  ;
    return 0  ; 
}