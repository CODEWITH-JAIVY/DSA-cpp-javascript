// find the combination of  given number nCr or C(n, r) 

#include<iostream>
using namespace std ;
 
int  factorail ( int n  ) {
    if( n == 0  )  return 1  ;
    return  n  *  factorail(n-1) ;
}

int NCR  ( int n ,int r   )  {
    int base  =  factorail(n) ;
    int demon =  factorail(r) *  factorail(n-r) ;
    return   base / demon  ;  
}

int main () {
    int n , r   ;
    cout<< "Enter number to find the nCr or C(n, r) " ;
    cin >> n  >>  r ;

    int result  =  NCR  ( n ,r   ) ;
    cout<<result ; 
    return  0  ; 
}