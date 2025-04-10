
// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.



// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 11a
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false

// */
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
            return true;
        if (n == 0)
            return false;

        if (n % 2 != 0)
            return false;
        return isPowerOfTwo(n / 2);
    }
};

int main()
{
    Solution s;
    bool result = s.isPowerOfTwo(16);
    cout << result;
    return 0;
}