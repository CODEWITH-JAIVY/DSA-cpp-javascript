#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;


int main () {
    vector<int>arr  = { 1,2,3,4,5,6,8,8} ;
    arr.push_back(100)  ;
    arr.emplace_back ( 200 ) ; 
     cout<<  "capacity of arr  is  :- " << arr.capacity() << endl  ;
    for( int val : arr ) {
        cout<< val  << "  "  ;
    }
    return 0 ; 
}