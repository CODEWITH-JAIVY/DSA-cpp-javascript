// Find the total Number of occurance in   array using time complexity o( log n ) 

#include<iostream>
#include<vector>
using namespace std  ;

int FirstOccurance( vector<int>arr , int  start , int end ,int  target   )  {
    int first   = -1  ;
    while ( start <= end  ) {
        int mid  =  ( start +end ) / 2  ;

        if ( arr[mid] ==  target  ) {
            first  = mid  ;
            end  = mid  -1  ;
        }else if ( arr [mid] < target   ) {
            start = mid  +1 ;
        }
        else {
            end = mid -1  ; 
        }
    }
    cout<< first << endl  ; 
     return first  ;  
}
int Lastoccurance (vector<int> arr ,int start , int end , int target  ) {

    int  last    = -1  ;
    while ( start <= end  ) {
        int mid  =  ( start +end ) / 2  ;

        if ( arr[mid] ==  target  ) {
            last   = mid  ;
        start  = mid  + 1  ;
        }else if ( arr [mid] < target   ) {
            start = mid  +1 ;
        }
        else {
            end = mid -1  ; 
        }
    }
    cout<< last<<endl  ; 
     return  last   ; 
 
}
int TotalNumberOfOccurance ( vector<int>arr , int size   , int target  )  {
    int  start  = 0  ,end = arr.size() ;
    int first  = FirstOccurance( arr ,  start , end , target   ) ;
    int last = Lastoccurance ( arr , start , end , target  )  ;
     return (last  - first  ) + 1 ; 
}

int main () {
    vector<int> arr  = { 0,1,1,1,1,2,2,2,2,2,3,3,3,3,3,} ;
     int restul  =  TotalNumberOfOccurance ( arr , arr.size()  , 3 ) ;
     cout<< "Total number of Occcureanmce " << restul ; 
     return  0  ;  

}
