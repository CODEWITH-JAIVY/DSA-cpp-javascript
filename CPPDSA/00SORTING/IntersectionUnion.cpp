
/*
 Given two unsorted array ,find the union and intersection of  these two array  

*/
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> Union(vector<int> arr1, vector<int> arr2) {
        unordered_set<int> seen;
        vector<int> result;

        for (int val : arr1) {
            if (seen.find(val) == seen.end()) {
                seen.insert(val);
                result.push_back(val);
            }
        }

        for (int val : arr2) {
            if (seen.find(val) == seen.end()) {
                seen.insert(val);
                result.push_back(val);
            }
        }
        return result;
    }

    vector<int> intersection(vector<int> arr1, vector<int> arr2) {
        // Sort both arrays
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        unordered_set<int> seen;
        vector<int> result;
        int i = 0, j = 0;

        // Use two pointers to find the intersection
        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr1[i] > arr2[j]) {
                j++;
            } else { // arr1[i] == arr2[j]
                if (seen.find(arr1[i]) == seen.end()) {
                    seen.insert(arr1[i]);
                    result.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> arr1 = {1, 11, 2, 3, 14, 5, 6, 8, 9};
    vector<int> arr2 = {2, 5, 12, 7, 8, 13, 10 , 11 };

    vector<int> unions = s.Union(arr1, arr2);
    vector<int> intersection = s.intersection(arr1, arr2);
     sort( unions.begin() , unions.end() ) ;
    cout << "Union of both given arrays: " << endl;
    for (int val : unions) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Intersection of both given arrays: " << endl;
    for (int val : intersection) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}