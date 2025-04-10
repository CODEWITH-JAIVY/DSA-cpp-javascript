//1009. Complement of Base 10 Integer
/*
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

 

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
*/


#include<iostream>
using namespace std  ; 
class Solution {
    public:
        int bitwiseComplement(int n) {
            if (n == 0) return 1; // edge case
    
            int mask = 0;
            int num = n;
    
            // Create mask with all bits set to 1 up to the highest bit of n
            while (num > 0) {
                mask = (mask << 1) | 1;
                num >>= 1;
            }
    
            // Bitwise NOT of n and AND with mask to remove leading 1s
            return ~n & mask;
        }
    };
    
    int main () {
        Solution s  ;
        int result  = s.bitwiseComplement(5) ;
        cout<< result  ;
        return  0  ; 
    }