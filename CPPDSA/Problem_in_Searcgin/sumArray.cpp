/* Write a method that return the sum of all the integer array elements , 
 given array as an input argument 
*/
#include<iostream>
#include<vector>
using namespace std ;

int main () {
    int sum  =0  ;
    vector<int>arr = { 1,2,3,4,5,6,7,8,9} ;
    for( int i  =0  ; i < arr.size() ; i++ ) {
        sum += arr[i] ;
    }
    cout<<"Sum of array Element " << sum  ; 
    return  0  ; 
}