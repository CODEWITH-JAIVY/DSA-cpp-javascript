// factorial of a number using recursion 
#include<iostream>

using namespace std  ;
class Solution {
 public :
 int Factorial( int num ) {
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }   
    if (num == 0 || num == 1) return 1;

    return num * Factorial(num -1 ) ;
 }
} ;

int main() {
    Solution s ;
    int num  ;
  
    cout<<"Enter number to find the factorail  " ;
    cin>> num  ;

    int result  = s . Factorial( num ) ;
    cout<< result  ;
    return  0  ; 
}