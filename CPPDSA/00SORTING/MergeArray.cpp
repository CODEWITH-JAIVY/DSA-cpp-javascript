/*
 Given two sorted array sort the elements of these arrays so that the first half
  of sorted elements will lie in the first  array and the second half lies tin teh second array 
 Etra space allowed is  0 ( 1 ) 

 */ 
#include<iostream>
using namespace std  ;
int mergeBothArry ( int*arr , int*arr2  , int size1 ,int size2  , int *result  ) {
    
    int i  = 0 , j =0 , k =0   ;
    while( i <size1 && j < size2 )  {
        if ( arr[i] < arr2[j]) {
           result[k++] = arr[i++] ;
        }
        else {
            result[k++] = arr2[j++] ;
        }
    }
    while ( i < size1  ) {
        result[k++] = arr[i++] ;
    }
    while ( j <  size2 ) {
        result [k++] = arr2[j++] ;
    } 
    
}

int main () {
    int arr  [] =   {  1,2,3,5,8,9,} ;
    int arr2 [] = { 4,5,6,7,10,11} ;    
    int size1 = sizeof(arr)/ sizeof(arr[0]) ;
    int size2  = sizeof(arr2) / sizeof(arr[0]) ;
    int  restult[size1+size2]  ;
      mergeBothArry ( arr , arr2  , size1 ,size2 , restult   ) ;

      cout<< "After merging both arrray in sorting order " ;
      for ( int i = 0 ; i < size1 + size2  ; i++ ) {
        cout<<restult[i] << "  " ;
      }
      cout <<endl  ;  
      
      return 0  ; 


}