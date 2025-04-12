/*
 in the Given list of integer , both +ve , -ve , you need to find the two 

 such that  sum is closest to zero
*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std  ;
 
vector<int> MinSum ( vector<int> arr )  {
    vector<int> result  ;
    int Min_sum  = 0  ;  
    sort ( arr.begin() , arr.end() ) ; // -10,-9,-6,1,2,3,5,6,

    for  (int i =0  ; i< arr.size() ; i++  )  {
            
    }
}

int main() {
  vector<int>arr = { 1,5,-10,3,2,-6,8,-9,6} ;
  int size = arr .size() ;
  vector<int>result = MinSum ( arr ) ;

} 