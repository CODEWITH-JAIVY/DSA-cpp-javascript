//  there are  given two list find the two number both list that is equal to the given value
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Brute-force O(n^2)
    vector<int> PairSum(vector<int> arr1, vector<int> arr2, int value) {
        cout << "Brute Force Approach:\n";
        vector<int> result;
        for (int val1 : arr1) {
            for (int val2 : arr2) {
                if (val1 + val2 == value) {
                    result.push_back(val1);
                    result.push_back(val2);
                }
            }
        }
        return result;
    }

    // Binary Search Helper
    bool Binary_search(vector<int>& arr, int start, int end, int target) {
        if (start > end) return false;
        int mid = (start + end) / 2;
        if (arr[mid] == target) return true;
        if (arr[mid] < target)
            return Binary_search(arr, mid + 1, end, target);
        else
            return Binary_search(arr, start, mid - 1, target);
    }

    // Binary Search Based Approach: O(n log n)
    vector<int> PairSumOptimized(vector<int> arr1, vector<int> arr2, int value) {
        sort(arr2.begin(), arr2.end());
        vector<int> result;

        for (int val1 : arr1) {
            int remaining = value - val1;
            if (Binary_search(arr2, 0, arr2.size() - 1, remaining)) {
                result.push_back(val1);
                result.push_back(remaining);
            }
        }
        return result;
    }
};

// Main driver
int main() {
    Solution sol;
    vector<int> arr1 = {1, 4, 7, 8, 5, 2, 3, 6, 9, 0};
    vector<int> arr2 = {3, 6, 9, 8, 5, 2, 7, 4, 1, 0};
    int value;
    cout << "Enter number to find the pair: ";
    cin >> value;

    // Brute-force result
    vector<int> result1 = sol.PairSum(arr1, arr2, value);
    cout << "Pairs (Brute-force): ";
    for (int i = 0; i < result1.size(); i += 2) {
        cout << "(" << result1[i] << ", " << result1[i + 1] << ") ";
    }
    cout << endl;

    // Optimized result
    vector<int> result2 = sol.PairSumOptimized(arr1, arr2, value);
    cout << "Pairs (Optimized): ";
    for (int i = 0; i < result2.size(); i += 2) {
        cout << "(" << result2[i] << ", " << result2[i + 1] << ") ";
    }
    cout << endl;

    return 0;
}
