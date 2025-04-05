/*The XOR total of an array is defined as the bitwise XOR of all its elements, or 0 if the array is empty.

For example, the XOR total of the array [2,5,6] is 2 XOR 5 XOR 6 = 1.
Given an array nums, return the sum of all XOR totals for every subset of nums. 

Note: Subsets with the same elements should be counted multiple times.

An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b.

 */
#include<iostream>
using namespace std;

int SumXor(int *arr, int index, int currentXor, int size) {
    if (index == size) {
        return currentXor;
    }

    // Include current element
    int include = SumXor(arr, index + 1, currentXor ^ arr[index], size);

    // Exclude current element
    int exclude = SumXor(arr, index + 1, currentXor, size);

    return include + exclude;
}

int main() {
    int nums[] = {2, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = SumXor(nums, 0, 0, size);
    cout << "Subset XOR sum: " << result << endl;
    return 0;
}

