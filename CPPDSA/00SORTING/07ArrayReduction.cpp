/*
 Given an array of positive elements . you need to perfrom a reduction operation  , in Each reduction
 operation , the smallest positive element value is   piced and all the elememnts are 
 subtracted by that value  , You need to print the number of elements left after each reduction process

*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;
   void quick(vector<int>&arr , int size ) {
    // Using STL sort (which is typically a hybrid Quick Sort - Introsort)
    sort(arr.begin() , arr.end() ) ;

   }
 int Reduction( vector<int>arr , int size ) {
    int count = 0   ;
    quick( arr , size ) ;
    int reduction  = arr[0] ;
     // 1 , 1, 1, 2, 3, 5  
     for ( int i  = 0  ; i< size ; i ++ ) {
        if ( arr[i] - reduction > 0 ) {
            reduction = arr[i] ;
            count++ ;
        }
     }
     return count  ; 
 }
int main () {
    vector<int> arr  = { 5,1,1,1,2,3,5} ;
    int ReductionCount  = Reduction( arr , arr.size() ) ;
    cout<<"Number of reduction " << ReductionCount << endl  ;
    return 0 ;  
}