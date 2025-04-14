/*
 Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1] 
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstOccurence(vector<int> arr, int target) {
        int start = 0, end = arr.size() - 1, first = -1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (arr[mid] == target) {
                first = mid;
                end = mid - 1;  // keep searching on left side
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return first;
    }

    int lastOccurence(vector<int> arr, int target) {
        int start = 0, end = arr.size() - 1, last = -1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (arr[mid] == target) {
                last = mid;
                start = mid + 1;  // keep searching on right side
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        int first = firstOccurence(arr, target);
        int last = lastOccurence(arr, target);
        return { first, last };
    }
};

int main() {
    Solution sol;
    vector<int> arr = { 0, 1, 1, 2, 2, 2, 2, 2, 3 };
    vector<int> result = sol.searchRange(arr, 2);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
