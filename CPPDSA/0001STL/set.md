# 🌳 C++ STL: `std::set` vs `std::unordered_set`

`std::set` and `std::unordered_set` are two important associative containers in the C++ Standard Template Library (STL). Both store **unique** elements, but they differ in how the elements are stored and accessed. This document explains the key differences and provides examples for both containers.

---

## 📘 1. `std::set`

### ✅ Key Features:
- **Sorted order**: Elements in a `set` are stored in **sorted order** by default (in ascending order).
- **Unique elements**: Duplicates are **not allowed**. If you try to insert a duplicate, the new element will not be added.
- **Underlying structure**: Typically implemented as a **Red-Black Tree**, which ensures that elements are stored in a balanced way.
- **Time complexity**:
  - Insertion, deletion, and searching have a time complexity of **O(log n)**.
  
### 🧪 Example:
```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 3, 7, 1, 9, 3};  // Duplicate 3 will be removed
    cout << "Ordered set: ";
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    s.insert(4);  // Insert a new element
    cout << "After insertion: ";
    for (int val : s) {
        cout << val << " ";
    }
    cout << endl;

    // Searching for element 3
    if (s.find(3) != s.end()) {
        cout << "3 is found" << endl;
    } else {
        cout << "3 is not found" << endl;
    }
    
    return 0;
}
```  

 # 🧠 Important Notes:
Sorted order: The elements are automatically sorted when inserted.

Duplicate removal: All elements are unique; duplicates are ignored.

Efficient searching: Searching, insertion, and deletion operations take O(log n) time due to the underlying Red-Black Tree structure.

 ## 📘 2. std::unordered_set
# ✅ Key Features:
Unsorted order: Elements in an unordered_set are not sorted. They are stored based on a hash function.

Unique elements: Like std::set, it only allows unique elements.

Underlying structure: Typically implemented using hash tables.

Time complexity:

`Average O(1) `time complexity for insertion, deletion, and search. However, in worst-case scenarios (like hash collisions), the time complexity can degrade to O(n).

### 🧪 Example

```cpp 
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 10, 30, 40};  // Duplicate 10 will be removed
    cout << "Unordered set: ";
    for (int val : us) {
        cout << val << " ";
    }
    cout << endl;

    us.insert(25);  // Insert a new element
    cout << "After insertion: ";
    for (int val : us) {
        cout << val << " ";
    }
    cout << endl;

    // Searching for element 20
    if (us.find(20) != us.end()) {
        cout << "20 is found" << endl;
    } else {
        cout << "20 is not found" << endl;
    }

    return 0;
}


``` 

# 🔧 When to Use What?
Use std::set when:

You need the elements to be stored in sorted order.

You need efficient range-based queries.

You are okay with a slightly higher time complexity for insertion, deletion, and search (O(log n)).

Use std::unordered_set when:

You don't need the elements to be in sorted order.

You need faster lookups, insertions, and deletions on average.

You have a large dataset and want to optimize performance (average time complexity is O(1)).



# 🆚 `std::set` vs `std::unordered_set`

| Feature                | `std::set`           | `std::unordered_set`  |
|------------------------|----------------------|-----------------------|
| **Order**              | Sorted (default)     | Unsorted (based on hash function) |
| **Duplicate Elements** | ❌ Not allowed       | ❌ Not allowed         |
| **Underlying Structure** | Red-Black Tree      | Hash Table            |
| **Time Complexity**    | O(log n) for insertion, deletion, and search | O(1) average case (worst-case O(n) due to hash collisions) |
| **Performance**        | Slower for large datasets compared to `unordered_set` | Faster for average use cases with large datasets |
| **Memory Usage**       | More memory overhead due to tree balancing | More memory usage for hash tables |
