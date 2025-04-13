#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <iostream>
#include <chrono> // For timing
using namespace std;
using namespace chrono;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        auto start = high_resolution_clock::now(); // Start time

        unordered_map<int, int> freq;
        unordered_set<int> seenFreqs;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto& pair : freq) {
            int count = pair.second;
            if (seenFreqs.find(count) != seenFreqs.end()) {
                auto end = high_resolution_clock::now(); // End time
                auto duration = duration_cast<microseconds>(end - start);
                cout << "Execution Time: " << duration.count() << " microseconds\n";
                return false;
            }
            seenFreqs.insert(count);
        }

        auto end = high_resolution_clock::now(); // End time
        auto duration = duration_cast<microseconds>(end - start);
        cout << "Execution Time: " << duration.count() << " microseconds\n";

        return true;
    }


    bool uniqueOccurrencesusingXOR(vector<int>arr) {
        int ans  = 0  ;
        for(  int val : arr ) {
            ans  =ans ^ val ;
        }
        return ans ; 
    }
};

// Sample usage
int main() {
    Solution sol;
    vector<int> arr = {1, 2, 2, 1, 1 }; // Expected: true
    // cout << boolalpha << sol.uniqueOccurrences(arr) << endl;

    // using  booling 
    cout<<boolalpha << sol.uniqueOccurrencesusingXOR(arr) ;

      
    return 0;
}
 