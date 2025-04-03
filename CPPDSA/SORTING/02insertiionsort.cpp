#include<vector>
#include<iostream>
#include<algorithm>
 
using namespace std ; 
class Solution {
 public :
 void display (vector<int>arr) {
    for ( int i =0 ; i< arr.size() ; i++ ) {
        cout<< arr[i] << " " ; 
    }
 }
 void insertionSort(vector<int>&arr) {
     for ( int  i = 1 ; i < arr.size() ; i++ ) {
    int tem  = arr[i] ;
      int j = i-1 ; 
      while ( j >= 0  && arr[j] > tem ) {
        arr[j +1 ] = arr[ j] ;
        j-- ; 
      }
      arr[j+1] = tem ; 
     }
     for ( int i =0 ; i< arr.size() ; i++ ) {
        cout<< arr[i] << " " ; 
    } 
 }
};

int main() {
 Solution s  ;
vector<int>arr  = { 9,8,6,65,2}  ;
 s.insertionSort(arr) ;
//  s.display(arr) ;
 return  0  ;  
}