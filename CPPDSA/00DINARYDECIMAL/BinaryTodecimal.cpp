#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string binary = "100"; // binary of 11
    bitset<8> b(binary);    // 8-bit binary representation
    cout << "Decimal: " << b.to_ulong() << endl;
    return 0;
}
