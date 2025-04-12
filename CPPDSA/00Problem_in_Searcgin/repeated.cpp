/*Given an unsorted list of n Element , find the first Element which is repeated */ 
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std ;
 
int main () {
    vector<int> arr = { 1,2,3,4,5,6,8,5,5,1} ;
    unordered_set<int> seen  ;

    int Repeated = 0  ; 
    for( int i =0  ; i < arr.size() ; i++ ) {
        if ( seen.find(arr[i]) != seen.end() ) {
            Repeated = arr[i] ;
            break;
        }
        seen.insert(arr[i]) ;
    }
    
    if(Repeated != 0 ) {
        cout<<"Repeated number is " << Repeated << endl  ;
    }
    else {
        cout<<"Not repeated number " ;
    }

    return  0  ; 
    
} 