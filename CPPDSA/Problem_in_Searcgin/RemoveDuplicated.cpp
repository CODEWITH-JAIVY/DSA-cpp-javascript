#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void RemoveDuplicate(vector<int>& arr) {
    unordered_set<int> hashtable;
    vector<int> uniqueArr;

    for (int val : arr) {
        // Insert only if not already present
        if (hashtable.find(val) == hashtable.end()) {
            hashtable.insert(val);
            uniqueArr.push_back(val);
        }
    }

    arr = uniqueArr; // Replace original vector with the filtered one
}

int main() {
    vector<int> Arr = {1, 1, 1, 2, 3, 3, 6, 5, 2, 4, 5, 6, 3, 2, 0};

    RemoveDuplicate(Arr);

    for (int val : Arr) {
        cout << val << " ";
    }

    return 0;
}
