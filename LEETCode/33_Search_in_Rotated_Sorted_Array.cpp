// 33. Search in Rotated Sorted Array
//  There is an integer array nums sorted in ascending order (with distinct values).
/*

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    // Binary Search Function
    int binarySearch(const vector<int>& arr, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) return mid;
            if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    // Find Pivot Index (Index of largest element)
    int findPivot(const vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (mid < end && arr[mid] > arr[mid + 1]) return mid;
            if (mid > start && arr[mid] < arr[mid - 1]) return mid - 1;

            if (arr[mid] >= arr[start]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1; // No rotation found, means array is already sorted
    }

public:
    int search(vector<int>& arr, int target) {
        int pivot = findPivot(arr);

        // If no pivot, just do normal binary search
        if (pivot == -1) {
            return binarySearch(arr, 0, arr.size() - 1, target);
        }

        // If pivot found, we have two sorted arrays
        if (arr[pivot] == target) return pivot;

        if (target >= arr[0]) {
            return binarySearch(arr, 0, pivot - 1, target);
        } else {
            return binarySearch(arr, pivot + 1, arr.size() - 1, target);
        }
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target;
    cout << "Enter number to find in the rotated sorted array: ";
    cin >> target;

    int index = sol.search(arr, target);
    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
