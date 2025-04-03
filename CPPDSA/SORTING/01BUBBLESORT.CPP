#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
void display(vector<int>arr ) {
    for( int val  : arr ) {
        cout<< val <<" " ;
    }
    cout<< endl  ; 

}

void  bubleSort(vector<int>&arr)  {
    for( int i  =0  ; i <arr.size()-1 ; i++ ) {
        for( int  j= 0  ; j < arr.size() ; j++ ) {
            if ( arr[j+1] < arr[j]) {
                swap( arr[j+1] , arr[j] ) ; 
            }
        }
    }
    display( arr) ; 
}
void BubbleSort(vector<int>arr) {
    // using predefine function 
    sort(arr.begin() , arr.end() ) ;
    display(arr) ; 
}
int main () {
    vector<int> arr  = { 9,8,7,6,5,4,32,1} ;
    // bubleSort(arr) ; 
    BubbleSort(arr) ;
    
    return  0  ; 
}