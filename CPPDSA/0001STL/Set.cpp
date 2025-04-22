#include<iostream>
#include<set>
#include<unordered_set>
using  namespace std  ;

int main () {
    set<int  > s  = { 11,11,12,10,1,1,1,2,2,2,3,3,3,4,4,5,5,7,6,6} ;
    unordered_set<int> Us  = { 10,22,555,666, 1,1,2,2,3,3,4,4,5,6} ;
     
    cout<< "Order set " <<endl ;
    for ( int val : s ) {
        cout<< val << "  " ;
    }
    cout<< endl ; 
    s.insert(100) ;

    for ( int val : s ) {
        cout<< val << "  " ;
    }
    
    if (s.find(1) != s.end()) { 
          /* s.find(1) returns an iterator to the element 1 if it exists. If it doesn’t exist, it returns s.end(), which is a special iterator indicating the end of the set.

        The comparison s.find(1) != s.end() checks if the iterator points to an actual element or if it is the end() iterator, meaning the element was not found.*/
        
        cout << "Found ";
    } else {
        cout << "Not found ";
    }
    
    cout<< endl ;  
    
     for ( int val : Us ) {
        cout<< val  << " " ; 
     }
    
    return  0  ; 
}