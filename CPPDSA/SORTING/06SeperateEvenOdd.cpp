/* Given an array of even and odd numbers , write a program to separete even numbers from 
  odd numbers 
*/
#include<iostream>
#include<vector>
using namespace std ; 

int Separate( vector<int>&arr , int size )  {
    int start  = 0  , end  = size-1 ;
  while ( start < end  ) {
    if (  arr[start] % 2 == 0 ) {
        start++ ;
    }
    else if  ( arr[end] % 2 !=  0 ) {
        end --  ; 
    }
    else {
        swap( arr[start] , arr[end]) ;
        start ++ ;
        end-- ;

    }
  }
}

int main () {
    vector<int>arr {9,6,6,3,3,5,8,5,4,65,10} ;
    int size  = arr.size() ; 
    Separate( arr , size ) ;
     for(int val : arr  ) {
        cout<< val  <<  " " ;
     }
     return 0  ;  
}