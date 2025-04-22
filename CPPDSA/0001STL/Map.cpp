#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> Om;
    Om[8] = "a";
    Om[2] = "b";
    Om[3] = "c";
    Om[8] = "c" ;

    // Iterating using iterator
    map<int, string>::iterator it;
    for (it = Om.begin(); it != Om.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Using find()
    int key_to_find = 2;
    it = Om.find(key_to_find);
    if (it != Om.end()) {
        cout << "Found key " << key_to_find << " with value: " << it->second << endl;
    } else {
        cout << "Key " << key_to_find << " not found!" << endl;
    }

    // Using insert()
    // Om.insert({4, "d"});
    // cout << "After insertion of (4, d):" << endl;
    // for (const auto& [key, value] : Om) {
    //     cout << key << " -> " << value << endl;
    // }

    return 0;
}
