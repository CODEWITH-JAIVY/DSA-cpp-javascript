/*
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 
*/
#include<iostream>
#include<string>
using namespace std  ;

string AddBinary( string a ,string  b  )  {
    string result  =  " " ;
    int carry  =0  ;  
    int i  =  a.length() -1  ;
    int j  = b.length() -1  ;

    while( i >= 0  || j >=0 || carry ) {
        int sum  =  carry  ;

        if( i>=0 ) sum += a[i--] - '0' ;
        if( j >=0) sum += b[j--] - '0' ;

         result = char ( sum %2 + '0') + result  ;

         carry = sum / 2  ; 
    }
     return result  ; 
}
int main () {
    string  a  = "11" ;
    string b  = "10" ;
    string result = AddBinary( a , b  ) ;
    cout<< result  ;
    return  0  ;  

}