/* Binary search 
   time complexity o ( log n ) 
   space complexity  o( 1 ) 
   condtion  :- binary Searchin allow impiment for the sorted array  
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std  ;

class BinarySearch  {
    public :
    // bool  SearchImpliment (vector<int>arr   , int start , int end  , int target )   {
    //     if( start > end ) return false ;

    //     int mid = (start + end ) / 2  ;
    
    //     if ( arr[mid] == target ) {
            
    //         return  true   ; 
    //     }
    //     if( arr[mid] <  target ) {
    //         return SearchImpliment( arr , mid+1 , end  , target ) ;
    //     }else {
    //        return  SearchImpliment( arr , start  , mid  , target )  ; 
    //     }
          
    // }
    // bool Search ( vector<int>arr , int size , int  target )   {
    //         return SearchImpliment ( arr  , 0 , size-1 , target )  ;

    // }

    bool Search ( vector<int>arr , int size , int target ) {
           bool result = binary_search(  arr.begin() , arr.end() , target  ) ;
           return result ; 
    }  
} ;

int main () {
    vector<int> arr  = { 1,2,3,4,5,6,7,8,9} ;
    BinarySearch b  ;
    int target ; 
    cout<< "Enter number to be Search " ;
    cin>> target  ; 
    bool  result  = b.Search( arr , arr.size() , target ) ;
    if( result) {
        cout<< "Number fount " ;
    }else {
        cout<<"Not fount " ;
    }
    return   0  ; 
}