// Given an array containing 0s , 1s , 2s , Write an algorithm  to sort the Array so that 0s , come 1st , after 1s 
// followed by 2s  
 
#include<iostream>
#include<algorithm>
using namespace std  ;

int  Sort (int *arr , int size   ) {
    int start  = 0   , end =  size -1 , temp = 0  ;
    while ( temp  <= end  ) {
      if ( arr[temp] == 0 ) {
        swap(arr[start] , arr[temp]) ;
        start ++ ;
        temp  ++ ;
      }
      else if( arr[temp] ==  1  ) {
        temp++ ;
      }
      else {
        swap( arr[temp] , arr[end]) ;
        end -- ; 
      }
    }
     

}
int main() {
    int arr [] = { 0,1,2,0,1,2,0,1,2,0} ;
    int size = sizeof(arr) / sizeof(arr[0]) ;
    
    Sort ( arr , size  ) ;

    for ( int i  =0 ; i < size  ; i++ ) {
        cout<< arr[i] <<"  " ;
    }
    return  0  ;  
} 