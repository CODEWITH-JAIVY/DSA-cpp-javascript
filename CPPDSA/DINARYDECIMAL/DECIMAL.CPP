#include <iostream>
#include<math.h>
#include <vector>
using namespace std;


vector<int> DecimalToBinary(int num) {
    vector<int> binary;

    if (num == 0) {
        binary.push_back(0);
        return binary;
    }

    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    return binary;
}
int main() {
    int num;
    cout << "Enter a number to convert decimal to binary: ";
    cin >> num;

    // vector<int> result = DecimalToBinary(num);

    // cout << "Binary: ";
    // for (int i = result.size() - 1; i >= 0; i--) {
    //     cout << result[i];
    // }
     

    //second appraoch 
    int ans = 0  ; 
    int i =0  ; 
    while ( num != 0  ) {
        int bit  = num & 1 ;
        ans  = ( bit *pow ( 10 , i ) ) +ans  ; 
        i++ ;
        num  = num >> 1  ; 

    }
    cout<< ans  ; 
    cout << endl;
    return 0;
}
