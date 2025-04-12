#include<iostream>
#include<vector>
using namespace std ;

class Searching  {
    public :  
    bool  LinearSearch( vector<int>arr , int size  , int target  ) { 
        bool result = false  ;
        for( int i = 0  ; i< size  ; i ++  ) {
             if( arr[i] == target ) result = true  ;
        }
      return result ; 
    }
} ;
int main () {
    Searching s ;
    vector<int>arr ={3,2,1,6,5,4,10,9,8} ;
    int target  ;
    cout<< "Enter number to be Search " ;
    cin >> target ; 
    bool result  = s.LinearSearch(arr , arr.size() , target ) ;
    if( result ) {
        cout<<"Number is found " ;
    }else {
        cout<<"Not found " ;
    }
    return  0  ; 
}