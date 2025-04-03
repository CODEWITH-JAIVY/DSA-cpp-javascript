#include<iostream>
#include<vector>
using namespace std  ;

class Solution{
 public :
 void display(vector<int>&arr) {
 for ( int val  : arr ) {
    cout<< val  << " " ;
 }
 cout<< endl ; 
 }

 void  SelectionSort ( vector<int>&arr) {
    for ( int  i =0  ; i <arr.size()-1 ; i++ ) {
      int max =  i   ; // max value represent the max index value 
      for( int j = i+1  ; i < arr.size() ; j++  ) {
        if ( arr[j] > arr[max] ) {
            max = j  ;  
        }
      }
      if ( i =!max)
       swap( arr[i] , arr[max]) ;
    }
 }
};
int main(){
    Solution s  ;
    vector<int>arr = { 9,8,7,5,6,0,5} ;

     s.SelectionSort( arr ) ;
    s.display(arr) ;
   return 0  ; 
}