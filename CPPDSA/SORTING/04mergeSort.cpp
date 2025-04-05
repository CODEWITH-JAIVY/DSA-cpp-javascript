#include<iostream>
#include<algorithm>
#include<vector>
using namespace std  ;
void merge(vector<int>&arr , int start , int mid  , int end  ) {
 vector<int> result  ;
 int i = start , j = mid+1 ;

 while ( i <= mid  && j <= end ) {
    if( arr[i] <= arr[j]) {
        result.push_back(arr[i++]) ;
    }else{
        result.push_back(arr[j++]) ;
    }
 }

 while( i <= mid  ) {
     result.push_back(arr[i++]) ;
 }
 while( j <= end ) {
    result.push_back(arr[j++]) ;
 }

for ( int k =0 ; k<result.size() ;  k++ ) {
    arr[start+k] = result[k] ;
}
}

void mergeAlgo( vector<int>&arr , int start  , int end  ) {
  
if ( start >= end   )  return ; 

  int mid = (start + end  )/ 2  ;
  mergeAlgo( arr , start , mid  ) ;
  mergeAlgo(  arr , mid +1 , end  ) ;
  merge( arr , start  , mid , end   ) ;

}
void  mergeSort(vector<int>&arr , int size )  {
    
mergeAlgo( arr , 0 , size-1 ) ;

  
}
int main() {
    vector<int>arr  = { 9,6,6,3,8,5,2,23} ;
    int size  = arr.size () ;
    mergeSort( arr , size ) ;
    cout<<"Sorted array is" ;
    for( int val : arr ){
        cout<< val <<" " ;
    }
    return 0  ;  
}