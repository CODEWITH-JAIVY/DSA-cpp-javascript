# 🌳 C++ STL: `std::map` vs `std::multimap`

The C++ Standard Template Library (STL) provides two powerful **associative containers** for key-value pairs: `std::map` and `std::multimap`.

---

## 📘 1. `std::map`

### ✅ Key Features:
- Stores **key-value pairs**.
- **Each key is unique**.
- Keys are stored in **sorted order** by default (ascending).
- Implemented as a **Red-Black Tree** (a self-balancing BST).
- Provides **logarithmic time complexity** (`O(log n)`) for insertion, deletion, and lookup.

### 🧪 Example:
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> myMap;
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[1] = "Avocado"; // Overwrites "Apple"

    for (const auto& pair : myMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}
 ```

# 🧠 Important Notes:
- Duplicate keys are not allowed.

- If a duplicate key is inserted, the new value overwrites the previous one.

- Duplicate values are allowed.

- Insertion methods:

- map[key] = value;

- insert({key, value});

- emplace(key, value);

 # 📘 2. std::multimap
✅ Key Features:
- Stores key-value pairs with duplicate keys allowed.

-  Maintains sorted order of keys.

- Also implemented using a Red-Black Tree.

- No direct element access with `[ ] `operator.
- Use insert() to add elements.- 

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int, string> mm;
    mm.insert({1, "Apple"});
    mm.insert({1, "Avocado"});
    mm.insert({2, "Banana"});

    for (const auto& pair : mm) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}


```

## 🆚 Comparison Table

| Feature               | `std::map`         | `std::multimap`     |
|------------------------|--------------------|----------------------|
| Duplicate Keys         | ❌ Not Allowed      | ✅ Allowed            |
| Duplicate Values       | ✅ Allowed          | ✅ Allowed            |
| Key Order              | Sorted (default)   | Sorted (default)     |
| Key Uniqueness         | Unique             | Not Unique           |
| Access via `[]`        | ✅ Yes              | ❌ No                 |
| Underlying Structure   | Red-Black Tree     | Red-Black Tree       |
| Time Complexity        | O(log n)           | O(log n)             |

