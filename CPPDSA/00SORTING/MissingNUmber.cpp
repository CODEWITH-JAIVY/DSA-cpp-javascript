// given the list of n-1 element , which are the range of  1 to n  ,There are no 
// duplicate in the array  , One of the intefers is missing find the missing element 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

/*

 @1 🖊️🖊️🖊️🖊️🖊️🖊️approach  
  sum of n array index number  -  sum of total number 
  

  @2 sort the array than continualy cheack 
  arr[i] ==  i+1 
  

*/
int MissingNumber(vector<int>arr) {
    int size = arr.size() ; 
  
    int Exsum = 0  ;  
    int Insum  = 0  ; 
    for( int i =0  ; i< size  ; i++ ) {
           Exsum += arr[i] ;

    }
   
    for( int i =1  ; i<= size+1  ; i++ ) {
       Insum += i  ;  
        
       }
 
  return Insum - Exsum  ; 
  cout<<endl ; 
}

int main () {
    vector<int> arr = {1,5,4,3,2,7,8,9} ;
    int MISing_number  = MissingNumber(arr) ;
    cout<< "Missing number is " << MISing_number  ; 
    cout<< endl   ;  
}