/*
Remove duplicate  in an integer list 

 1,3,5,3,9,1,30
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std  ;

int RemoveDuplicate (vector<int>&arr ) {
    unordered_set<int>seen  ; // extrrac memory consume 
    vector<int> result  ;
    for( int val : arr ) {
        if( seen.find(val) == seen.end() ) {
          seen.insert(val) ;
          result.push_back(val) ;
        }
    }
      arr = result  ; 
}
// we can reduce space complexity and time complexity o( n ) 
int RemoveDuplicates(vector<int>&arr) {
int index = 0  ;

sort( arr.begin()  , arr.end() ) ;

for ( int i =1 ; i < arr.size() ; i++  ) {
    if( arr[i] != arr[index]) {
        index ++ ;
        arr[index] = arr[i] ;
    }
}
}


int main () {
    vector<int>arr = { 1,3,5,3,9,1,30} ;
    RemoveDuplicate ( arr ) ;
    cout<<"Update array value "  << endl  ;  
    for( int val : arr ){
        cout<< val  <<  "  " ;

    }
    cout<<endl ; 
    cout<<"Update array value  in space (1) ,time complexity  o(n) "  << endl  ;  
    RemoveDuplicates(arr)  ;
    for( int val : arr ){
        cout<< val  <<  "  " ;

    } 
    return  0  ;  
}