#include <iostream>
#include <algorithm> // for std::gcd

using namespace std;

  int gcd (int num1 , int num2 ) {
   if (num1 == num2 ) return num1 ;

   if(num1 % num2 == 0 ) return num2 ;

   if(num2%num1 == 0  ) return num1  ;

   if (num1  > num2 ) {

    return gcd( num1 % num2  , num2) ;

   }

   else {

    return gcd ( num1 , num2 % num1) ;

   }
  }

int main() {
  int result =  gcd(3, 6);  // Correct standard usage (C++17+)
 
  cout<< result ;
    return 0;
}
