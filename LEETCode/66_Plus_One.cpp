/*

You are given a large integer represented as an integer array digits,
 where each digits[i] is the ith digit of the integer. 
 The digits are ordered from most significant to least significant in left-to-right order.
  The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/
#include<iostream>
#include<vector>
using namespace std  ;

class Solution {
 public :
  vector<int>ByonePlus(vector<int>Digit)  {
     
       int size = Digit.size() ;
       for( int i = size-1  ; i >= 0  ; i -- ) {
          if(Digit[i]  <  9  ) {
               Digit[i] ++  ;
               return Digit ; 
          }
          Digit[i] = 0  ; 
       }
        
       Digit.insert(Digit.begin() , 1 ) ;
       return Digit ; 
  }
} ;

int main () {
    Solution sol ; 
    vector<vector<int> > digits  = { { 1,2,3,} , {8,9,9,} , {1,0,0} , {9} , {9,9,9}} ;
    for ( auto&val : digits) {
        vector<int>result  = sol .ByonePlus(val) ;

        for(int val  : result ) {
            cout<< val << " " ;
        }
        cout<<endl ; 

    }


}